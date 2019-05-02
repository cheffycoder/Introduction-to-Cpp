/*
Starting with the basic structure of C++

This are the things you'll see the most while working with the C++ language.

1. #include -> 	this is include directive which is a preprocessors that includes specific header files in your current file to save you from the hassle to 
				declare certain things that every program needs.
2. headerfile -> these are what you see after #include -> These are the files which contains declarations of certain classes and functions that you need in your function.

We will talk about using namespace std, in later programs and will design our own namespace to understand its functioning.

3. int main() -> this in lehman terms telling your computer to start its execution from this point and go on till it reaches the end of this main function.
*/

#include <iostream>
using namespace std;

int main(){
	cout<< "hello world" << endl;
	return 0;
}
