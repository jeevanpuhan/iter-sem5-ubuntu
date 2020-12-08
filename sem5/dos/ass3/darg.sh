#! /bin/bash
a=1;
for var in $@
do
echo "Argument $a is : $var"
a=$((a+1))
done

