#!/usr/bin/env python

import sys, random, string

if len( sys.argv ) < 2 :
   sys.exit( 'Missing number of registers: number register-file' )

names = ['Jordi', 'Josep', 'Joan', 'Jaume', 'Jan', 'Joana', 'Jordina', 'Jana' ]
addresses = [ 'Barcelona', 'Tarragona', 'Lleida', 'Girona', 'Paris', 'Munic' ]
providers = [ 'gmail.com', 'hotmail.com', 'yahoo.com' ]

if len( sys.argv ) < 3 :
    regfile = sys.stdout
else: 
    regfile = open( sys.argv[2], 'w' )

for _ in range( int( sys.argv[1] ) ) :
    name = random.choice( names ) 
    regfile.write( name + ' ' + random.choice( string.uppercase ) + '.,' )
    regfile.write( random.choice( addresses ) + ',' )
    regfile.write( name.lower() + '@' + random.choice( providers ) + ',' )
    regfile.write( str( random.randint( 600000000, 699999999 ) ) + '\n' )
