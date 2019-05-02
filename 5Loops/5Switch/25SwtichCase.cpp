//Switch case

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int age= 2;
	
	switch(age){
		case 16:
			cout<<"hey you can drive not"<< endl;
			break;// it saves the program to go through the after cases as soon as we get the case right
		case 18:
			cout<<"go buy lottery"<< endl;
			break;
		case 21:
			cout<<"buy me beer"<< endl;
			break;
		default:
			cout<<"sorry you got nothin"<< endl;
	}
	return 0;
}
