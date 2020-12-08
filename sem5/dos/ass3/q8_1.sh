#! /bin/bash
a=1
if(( $# % 2 != 0 ))
then
echo "Error: Odd number of arguments"
echo "No copy will take place!"
else
  while [ $a -le $# ]
  do
    echo "copy $1 to $2"
    cp $1 $2
    shift
    shift
  done
fi
