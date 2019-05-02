//sizeof() fn

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	//sizeof(); tells the memory in bytes
	
	char c;
	int d;
	double e;
	cout<< sizeof(c)<<endl;
	cout<< sizeof(d)<<endl;
	cout<< sizeof(e)<<endl;
	
	double shivam[10];
	cout<<sizeof(shivam)<<endl;
	
	//this gives us the no. of elements in an array like here in shivam array
	cout<< ( sizeof(shivam)/sizeof(shivam[0]) )<< endl;
	
	
	return 0;
}
