#!/bin/bash

# cat ~/workspace/shell/1.txt | grep "hello.*\nprint\necho"
cat ~/workspace/shell/1.txt | grep -vE "hell.*|pprint|echo"
echo $?
