#! /bin/bash
if(( $# % 2 != 0 ))
then
echo "Error: Odd number of arguments"
echo "No copy will take place!"
else
echo "copy $1 to $2"
cp $1 $2
shift
shift
echo "copy $1 to $2"
cp $1 $2
shift
shift
echo "copy $1 to $2"
cp $1 $2
fi

