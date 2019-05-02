// Reursion- a function will call itself
#include<bits/stdc++.h>
using namespace std;


int factorial(int x);

int main(){
	cout<<"The value is "<<factorial(5);
	return 0;
}

int factorial(int x){

		if(x==1)
		{	return 1;
		}
		else{
			return x* factorial(x-1);
		}
	}

// we need to have something called a base case, which is literally the end case
