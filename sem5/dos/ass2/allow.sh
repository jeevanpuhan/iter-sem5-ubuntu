#! /bin/bash
echo "Enter the marks of student: "
read m
echo "Enter the percentage of student: "
read p

if (( `echo "$m >= 20" | bc` )) && (( `echo "$p >= 75" | bc`))
then
	echo "Allowed for semester"
else
	echo "Not allowed"
fi

