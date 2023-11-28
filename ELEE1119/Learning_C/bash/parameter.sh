#! /usr/bin/env bash
if [[ $# -gt 6 ]];then
   echo -e "Too many arguments supplied:\n$#"
   exit 1
elif [[ $# == 0 ]]; then
   echo -e "Not enough arguments supplied:\n$#"
   exit 1
fi

while getopts u:a:f: flag
do
case "${flag}" in
   u) username=${OPTARG};;
   a) age=${OPTARG};;
   f) fullname=${OPTARG};;
   ?) echo "Not a recongnised option: ${flag}\n"
   exit 1;; # this is will catch illegal options
esac
done
echo "Username: $username"  "Age: $age"  "Full Name: $fullname"

