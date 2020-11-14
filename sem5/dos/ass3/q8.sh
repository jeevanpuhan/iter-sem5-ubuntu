#! /bin/bash
if(( $# % 2 != 0 ))
then
echo "Odd number of arguments"
else
echo "argument a is $1"
shift
shift
echo "argument 1 is $1"
fi

