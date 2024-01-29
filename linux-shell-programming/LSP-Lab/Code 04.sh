#!/bin/bash

echo "please enter the Character: "
read char

if [ ${#char} -eq 1 ];
then
 if [[ $char =~ [[:alpha:]] ]];
 then
 echo "The $char is an Alphabet"
 elif [[ $char =~ [[:digit:]] ]];
 then
 echo "The $char is an Digit"
 else
 echo "The $char is an Special Character"
 fi
else
echo "Please Enter only single digit character"
fi
