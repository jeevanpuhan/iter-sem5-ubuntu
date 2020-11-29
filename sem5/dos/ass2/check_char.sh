#! /bin/bash
echo "Enter the character: "
read n
len=`echo $n | wc -c`
#echo "length of char is : $len"
if (( len <= 2)); then
	if [[ $n == [A-Z] ]] ; then
		echo "You entered an upper case alphabet";
	elif [[ $n == [a-z] ]]
	then
		echo "You entered an lower case alphabet";
	elif [[ $n == [0-9] ]]; 
	then
		echo "You have entered a digit"
	else
		echo "You have a entered a special symbol"
	fi
else
	echo "You have entered more than one character"
fi
