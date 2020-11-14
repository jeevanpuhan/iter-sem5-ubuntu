#! /bin/bash
a=1
while [ $a -eq 1]
do
echo "Enter the file name"
read f
if [ -e $f ]; then
echo "Content of the $f is :"
cat $f
else
echo "file doesn't exist"
