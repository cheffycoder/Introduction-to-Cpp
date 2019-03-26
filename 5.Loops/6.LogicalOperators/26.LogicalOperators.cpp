//logical operators

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int age = 26;
	int money= 4;
	
	/*if (age>21){ 
		if( money>500){
			cout<<"You are allowed in!"<<endl;
		}
	}*/
	
	// thus to reduce multiple nested loops we can ues logical operators
	if(age>21 && money>500){// if all test are true then only this done
		cout<< "You are allowed in both test are true"<<endl;
	}
	
	
	if(age>21 || money>500){// if only one test is true then this operates
		cout<< "You are allowed in as one of the test is true"<<endl;
	}
	
	// if( tests || test || test || test){} this is or logical operator, runs even if one test is true
	// if( tests && test && test && test){} this is and logical operator, runs only when every single element is true 
	return 0;
}
