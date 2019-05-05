#include <bits/stdc++.h>
using namespace std;

int main(){
	int age= 178;
	
	if(age>60){
		cout<<"wow you are old1"<< endl;
		cout<<"wow you are old2"<< endl;
		cout<<"wow you are old3"<< endl;
		cout<<"wow you are old4"<< endl;
		cout<<"wow you are old5"<< endl;
		// nesting an if statement
		if(age>100){
			cout<< "Why are you alive";
		}
		// we can nest an if else too 
		// we can add as many nest if or if else 
	}
	else{
		cout<<"You are young, get a job"<< endl;
	}
	
return 0;
}
