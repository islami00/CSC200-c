#1/usr/bin/bash

read -p "Enter the prefix for the new templates: " PREFIX
echo $PWD
while true; do
    read -p "Enter the directory they are located in index-folder form: " DIRECTORY

    for i in `seq -w 01 02`
    do
        cp "./${DIRECTORY}/${i}/sol1.c" "./${DIRECTORY}/$i/sol1${PREFIX}.c"
    done
    read -p "continue or exit?" yn
    case $yn in
        [Yy]* ) continue;;
        [Nn]* ) exit;;
        * ) echo "Please answer yes or no.";;
    esac
done

