//pass by refrence

#include<bits/stdc++.h>
using namespace std;


void passByValue(int x); // fn prototyping
void passByReference(int *x);// fn prototyping

int main(){
	
	/* there are 2 diff ways to pass arguments to fn
	1. pass by value- here we pass a copy of variable
	2. pass by refrence- here we pass the variable address and thus giving direct access to 
	   variable and fn can modify the value 
	*/
	
	// we use pass by reference because it takes load of the cpu because it now dont have to make copy
	
	int betty=13;
	int sandy=13;	
	cout<< " Betty is initially "<< betty<< endl;//13
	cout<< " Sandy is initially "<< sandy<< endl;//13
	
	passByValue(betty);
	passByReference(&sandy);
	
	cout<< " Betty now after passByValue is "<< betty<< endl;//13
	cout<< " Sandy now after passByReference is "<< sandy<< endl;//99
	return 0;
}

void passByValue(int x){
	x=99;// betty stayed the same as this fn made copy of this and changed that to 99
	cout<< " Value of betty inside passByValue() fn is "<< x << endl;
}

void passByReference(int *x){
	*x=99;// sandy changed as this fn has direct access to sandy and thus changed it value at the address
}
