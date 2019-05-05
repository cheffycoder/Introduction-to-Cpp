//default arguments

/*  parameters are the variablesint the declaration of the function 
	argument is the actual value of this variable that gets passed to function
	
	Thus when dealing with methods, the term parameter is used to identify the placeholders in the method
	signature, whereas the term arguments are the actual values that you pass in to the method
*/
#include<bits/stdc++.h>
using namespace std;

int volume(int l=1, int w=1, int h=1);
// these are default values for these parameters
// if the user dont overwrites the values by passing arguments then the function will use these default values

int main(){
	cout<< volume(4,5,5)<< endl;
	cout<< volume(5)<< endl;// here the function assumes that the value 5 is given to length and l is overwritten but w,h=1.
	cout<< volume(5,6)<< endl;// thus now l and w are overwritten by 5 and 6 and h=1 as default because not overwritten.
	cout<< volume()<<endl;// here all the parameters are having default values i.e i=w=h=1. 
	
	return 0;
}

int volume(int l, int w, int h){
	return l*w*h;
}
