import h5py
import sys
import re
import numpy

parvals = dict()

def DecodeString(string):
    """IOUtil's DecodeString function to revert the escaped non-printing
       characters in parameter values"""
    retval = ''
    i = 0
    while(i < len(string)):
        if(string[i] != '\\'):
            retval += string[i]
        else:
            if(i+1 > len(string)):
                raise ValueError("invalid string: '%s'" % string)
            if(string[i+1] == '\\'):
                retval += '\\'
                i += 1
            else:
                if(i+3 > len(string)):
                    raise ValueError("invalid string: '%s'" % string)
                o1 = ord(string[i+1]) - ord('0')
                o2 = ord(string[i+2]) - ord('0')
                o3 = ord(string[i+3]) - ord('0')
                if(o1 < 0 or o2 < 0 or o3 < 0 or o1 > 7 or o2 > 7 or o3 > 7):
                    raise ValueError("invalid octal number: %s",
                                     string[i+1:i+4])
                retval += chr(8*8*o1 + 8*o2 + o3)
                i += 3
        i += 1
    return retval

for fn in sys.argv[1:]:
    fh = h5py.File(fn, "r")
    dset = fh['Parameters and Global Attributes/All Parameters']
    pairs = dset[()].splitlines()
    for pair in pairs:
        m = re.match("^([^ ]*) = (.*)$", pair)
        if(not m):
            raise ValueError("invalid paramter setting '%s'" % pair)
        parvals[m.group(1)] = DecodeString(m.group(2))

for par in parvals.iterkeys():
    print "%s => %s" % (par, parvals[par])
