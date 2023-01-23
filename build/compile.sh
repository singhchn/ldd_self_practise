#!/bin/bash
#echo "Hello World"
echo "Enter example name"
read name
#echo "Entered example is $name "
BUILD_DIR=$PWD
SOURCE_CODE_DIR=$PWD/../code/$name

#echo "build_dir=$BUILD_DIR code_dir=$SOURCE_CODE_DIR"

#cd $SOURCE_CODE_DIR
#make
#export TEST=$name
#echo $TEST
make $name $BUILD_DIR/Makefile
#echo $PWD
echo "Bye from compile script"
