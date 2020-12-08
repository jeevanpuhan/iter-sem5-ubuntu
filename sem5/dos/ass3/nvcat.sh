#! /bin/bash
a=1
while [ $a -eq 1 ]
do
echo "Enter the file name"
read f
if [ -e $f ]; then
echo "Filename: $f"
echo "Content of the $f is :"
cat $f
else
echo "file doesn't exist"
fi
echo "Do you want to display another file"
read a
done
