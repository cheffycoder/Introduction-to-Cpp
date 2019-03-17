/*
Let's move a step forward and work inside the main function.
Every line in the main function executes one after another from the start till the end.

cout and cin are the objects that are defined in the output and input streams which are included in your program using the iostream header file
iostream in simple terms is input output streams. We will talk about making your own header files and working with them later.
we will talk about objects and classes later on.

Take it as you are using some of the predefined things that enable you to print and take values from the terminal.

<< is the stream insertion operator used with cout to insert some outputs to the terminal.
>> is the stream extraction operator used with cin to extract some inputs from the terminal

\n is the newline -> this shifts the stream to the next line, so that any furthur stream operation is carried out in the next line now.

"" -> Everything used in between these within the cout object will be inserted onto the terminal.

*/
#include <iostream>
using namespace std;

int main(){
	cout << "boy i love bacon \n";
	cout<< "and ham\n";
	cout<<"-------------------\n";
	
	//for blank line in between
	cout << "boy i love bacon \n \n";
	cout<< "and ham\n";
	cout<<"-------------------\n";
	
	cout<<"boy \n i \n love\n bacon";
	
	
}
