# gfortran
CC = gcc-mp-4.7
FC = gfortran-mp-4.7
LD = $(CC)

CFLAGS  = -Wall -g -Ofast -march=native -std=gnu99
FFLAGS  = -Wall -g -Ofast -march=native -fcray-pointer
LDFLAGS = -Wall -g -Ofast -march=native
LIBS = -lgfortran

## xlf90
#CC = xlc
#FC = xlf90
#LD = $(CC)
#
#CFLAGS  = -qlanglvl=extc99
#FFLAGS  =
#LDFLAGS =
#LIBS =

## ifort
#CC = icc
#FC = ifort
#LD = $(CC)
#
#CFLAGS  = -std=c99
#FFLAGS  =
#LDFLAGS =
#LIBS =



all: arguments

arguments: main.o sub.o
	$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $*.c
%.s: %.c
	$(CC) $(CFLAGS) -S $*.c
%.o: %.f90
	$(FC) $(FFLAGS) -c $*.f90
%.s: %.f90
	$(FC) $(FFLAGS) -S $*.f90

clean:
	$(RM) main.o sub.o main.s sub.s arguments

.PHONY: all clean
