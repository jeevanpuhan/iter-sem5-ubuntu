#! /bin/bash
echo "My current present working directory is :"
pwd
echo "Non-Executable file present in my current working directory is "
ls -l | grep ^-..-..-..-
echo -e "\nDirectory exist in my pwd is "
ls -l | grep ^d
