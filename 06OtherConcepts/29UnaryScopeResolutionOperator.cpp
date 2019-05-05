// Scope of variables

#include<bits/stdc++.h>
using namespace std;

int tuna = 20;// global variable with same name as local variable but diff data type
// usually programmers give same name to variables when they are using diff data types for them
// like here global is int tuna; and local is double tuna;

void shivam();// function 

int main(){
	
	double tuna= 69;// local variable with same name but diff datatype
	/*this will overwrite the global variable as local variable is given
	prefrence as computer takes most inner variable in prefrence*/
	
	
	cout<<tuna<<endl;// this will print the local tuna
	
	// so how to print the outside global variable if we need to?
	
	// :: unary scope resolution operator
	//this will tell us that we have to use the global tuna instead of local one
	//or it says that use the variable thats outside this function
	cout<< ::tuna<< endl;// this will print the global variable
	
	
	shivam();

	return 0;
}

void shivam(){
	cout<< tuna<< endl;
}
