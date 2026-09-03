#!/usr/bin/gnuplot -persist
#
#    
#    	G N U P L O T
#    	Version 5.2 patchlevel 5    last modified 2018-10-06 
#    
#    	Copyright (C) 1986-1993, 1998, 2004, 2007-2018
#    	Thomas Williams, Colin Kelley and many others
#    
#    	gnuplot home:     http://www.gnuplot.info
#    	faq, bugs, etc:   type "help FAQ"
#    	immediate help:   type "help"  (plot window: hit 'h')
set terminal qt 0 font "Sans,9"
set output
set xtics rotate
set bmargin 10
set ylabel "time [s]" 
plot "<gawk '/CarpetStartup.*[gd]h::regrid/{print} !NF&&NR{exit}' carpet-timing-statistics.0000.txt" u 0:($4/1e9):xtic(1) w impulses t "time taken in dh::regrid"
#    EOF
