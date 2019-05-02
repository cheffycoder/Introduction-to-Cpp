//member initializer- anything thats in a class is called a member of a class
#include<bits/stdc++.h>
using namespace std;

class sally{
	
	public:
		sally(int a, int b)
		/* 
		   whenever we have a constant variable in the fn defined in the class we initialize those const variable
		   after the argument bracket end and before the body bracket starts
		   
		   
		   : this just tells c++ that we will be working with member intialiser syntax
		   
		   thus basically a list of all variables is made separated by comma
		   
		   we separate variables with comma and in the end don't put semicolon in end
		   syntax-  : variable1Name(value1), variable2Name(value2)
		*/
		: regVar(a), constVar(b), test(8)
		{
			
		} 
		
		
		void print(){
			cout<<" Regular var is "<< regVar <<" Constant var is "<< constVar << endl;
			cout<<" Test variable is "<< test <<endl;
		}
		
	private:
		
		int regVar;
		const int constVar;
		const int test;
};
int main(){
	
	sally so(2,4);
	so.print();
	
	return 0;
} 
