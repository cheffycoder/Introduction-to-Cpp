#include<bits/stdc++.h>
using namespace std;

int main(){
	int x=1;
	int no;
	int total=0;
	
	while(x<=5){
		
		//cout<< x << endl;
		cout<<"Enter a number ";
		cin>>no;
		total += no;
		x++;
	}
	cout<<" Your total is "<< total<< endl;
	return 0;
}
