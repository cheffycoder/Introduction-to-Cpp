// Function overloading
#include<bits/stdc++.h>
using namespace std;

void printNumber(int x);

int main(){
	
	int a=54;
	float b=32.4896;
	
	printNumber(a);
	printNumber(b);
	
	return 0;
}

void printNumber(int x){
	/*now we have to print both the declared int and float variables using this printNumber() fn
	but if we make the parameter int x, then we can't call float variable using this printNumber() fn
	and if we declare the parameter as float x, then it will give x.ooo answer for integer values
	thus to solve this we use operator overloading*/
	
	cout<<" I am printing an interger value "<< x<< endl;
}

/*  thus this fn is overloaded that means it has the same name but diff datatype as parameter
	and now as soon as the user enters an integer value it will use the above fn to print and 
	as soon as user enters a float value, it will use the below overloaded fn having double as parameter 
*/

void printNumber(float x){
	cout<<" I am printing a float value "<< x<< endl;
}


