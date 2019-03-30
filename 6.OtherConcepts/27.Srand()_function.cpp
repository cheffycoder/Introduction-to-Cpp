//Srand() function

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	/* this srand allows us to throw a number in it and change the algo a little bit as given below
	srand(57); or srand(23); or srand(any number);
	this allows the algo that runs rand() function to be a bit more controllable
	but we can see that every time we pass the same number again and again like srand(57); anf again srand(57);
	in srand() then it 
	generates the same numbers hence to make it more random we use the time(0) fn in srand() instead of numbers in it
	*/
	
	/* thus now srand (time (0)) fn will generate total random numbers
	this time(0) fn counts the no. of seconds and this value is changing every second hence giving a new value in
	srand() fn every second and thus the numbers generated now are totally random and not repeating as the value in
	srand() is not repeating
	*/
	
	srand(time(0));
	
	
	for(int x=1; x<25; x++){
		cout<<rand()<<endl;}
		// now if we want only to generate random numbers till 6 then
		cout<<"-------------"<<endl;
	
	
	for(int x=1; x<25; x++){
		cout<< rand()%6<< endl;
		}// but this is giving numbers from 0 to 5 thus
		cout<<"-------------"<<endl;
		
		
		for(int x=1; x<25; x++){
			cout<< 1+(rand()%6)<< endl;
			}// nowthis will give numbers from 1 to 6
	
	return 0;
}
