//Calculating Simple Interest

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	float a;// amount we have
	float p=10000;// principle 
	float r= 0.03;// intrest rate
	
	for(int day=1; day<=30; day++){
		a=p*pow(1+r, day);
		cout<< day<< " "<< a<< endl;
	}
	return 0;
}
