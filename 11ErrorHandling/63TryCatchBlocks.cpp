// Example on Exception Handling

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	try{
		
		int num1;
		cout<<" Enter first number"<<endl;
		cin>> num1;
		
		int num2;
		cout<<" Enter second number"<<endl;
		cin>>num2;
		
		
		if (num2==0){
		throw 0;
		}
		
		cout<< num1/num2<< endl;
	}
	catch(int x){
		cout<<"You cant use 0 in denominator. ERROR NO. "<< x<<endl;
	}
	
	
	//you can catch specific type error messages but in default this catch works
		
		
	catch(...){
		// this is used whenever we dont know what error message is going to pop
		// and if any error occour then it would be caught right here
		// this is a default catch
		cout<<"You cant use 0 in denominator. ERROR NO. "<< x<<endl;
	}
	
	
	return 0;
}
