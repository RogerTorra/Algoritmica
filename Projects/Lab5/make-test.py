#!/usr/bin/env python

import sys, random, math

if len( sys.argv ) < 2 :
    sys.exit( 'usage ' + sys.argv[0] + ' [outfile] [num-opers] [operation]' )

output = sys.stdout
sol_file = None
NumTimes = 100000
MaxCalls = 10000
MaxNumber = min( sys.maxsize, 10**8 )
operations = [ 'div', 'pot', 'pro' ]
operation = 'rand'

if len( sys.argv ) >= 2 :
    output = open( sys.argv[1], 'w' )
    sol_file = open( sys.argv[1] + '.out', 'w' )
if len( sys.argv ) >= 3 :
    NumTimes = int( sys.argv[2] )
if len( sys.argv ) >= 4 :
    oper = operation = sys.argv[3]
    
for _ in xrange( NumTimes ):
    solution = ''
    if operation == 'rand' :
        oper = operations[ random.randrange( 2 ) ]
    if oper == 'div' :
        ran1 = random.randint( 0, MaxNumber )
        quocient = random.randint( 1, min( ran1, MaxCalls ) )
        ran2 = ran1 / quocient
        solution = str( ran1 / ran2 ) + ' ' + str( ran1 % ran2 )
    elif oper == 'pro' :
        producte = random.randint( 0, MaxNumber )
        ran1 = random.randint( 1, producte )
        ran2 = producte / ran1
        solution = str( ran1 * ran2 )
    else :
        oper = 'pot'
        potencia = random.randint( 1, MaxNumber )
        ran1 = random.randint( 2, int( math.log( potencia ) ) )
        ran2 = int( math.log( potencia, ran1 ) )
        solution = str( ran1**ran2 )

    print >> output, oper + ' ' + str( ran1 ) + ' ' + str( ran2 )
    if sol_file :
       print >> sol_file, solution

