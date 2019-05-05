/*Comments and arithmatic operations in C++*/

//Multiline comment starts with the operator below
/*
Comments -> comments tell the compiler that these are the lines that you should ignore just like its a personal talk and compiler has no rights to interfere.

//-> This is single line comment.

How to write multiple lines with no hassle to putting // this everytime?
Use multiline comments. Everything we wrote is inside a multiline comment declaration.

*/
//Mutilines comment operator ends with the above operator. Anything between the start and the end of this multiline operators will be considered as a comment.
#include <iostream>
using namespace std;

int main(){
	int tuna = 6; // This is how we statically declare an integer variables in c++. Each Integer variables takes 4 bytes in our memory.
	cout << tuna << "\n" << "---------------------------\n";
	
	int a=4; int b=5;
	int sum = a+b; //You can use arithematic operators with their general meanings and use them to operate on variables.
	cout<< sum <<"\n"<<endl; //Printing the sum of the variables a and b.
	
	return 0;
	
	
}
