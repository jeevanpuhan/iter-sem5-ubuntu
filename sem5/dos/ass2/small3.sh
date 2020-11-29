#! /bin/bash
if (( $1 <= $2 )) && (( $1 <= $3 ))
then
	echo "$1 is smallest number"
elif (( $2 <= $1 )) && (( $2 <= $3 ))
then
	echo "$2 is smallest number"
else
	echo "$3 is smallest number"
fi
