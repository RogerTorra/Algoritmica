#!/usr/bin/env python

import sys, random

if len( sys.argv ) < 2 :
    sys.exit( 'usage ' + sys.argv[0] + ' [outfile] [number-of-integers]' )

output = sys.stdout
NumTimes = 100
MaxNumber = min( sys.maxsize, 10**8 )

if len( sys.argv ) >= 2 :
    output = open( sys.argv[1], 'w' )
if len( sys.argv ) >= 3 :
    NumTimes = int( sys.argv[2] )

list_of_numbers = map( str, sorted( [random.randint( 0, MaxNumber ) for _ in xrange( NumTimes )] ) )
number_to_search = list_of_numbers[ random.randint( 0, NumTimes ) ]

print >> output, number_to_search
print >> output, str( NumTimes ) + ' '
print >> output, '\n'.join( list_of_numbers )
    

