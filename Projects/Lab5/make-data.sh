#!/bin/bash
if [ $# -le 2 ]
then 
   echo usage $0 executable list-of-params
   exit
fi
EXEC=$1
shift
for i in $* 
do 
   echo -ne $i"\t" 
   ./make-integer-file.py temp.test $i; ./${EXEC} temp.test | grep calls | cut -d':' -f2  
done > ${EXEC}.data
