// arrow member selection operator

#include<bits/stdc++.h>
using namespace std;


class sally{
	
	public:
		
		void printCrap(){
			cout<<"Here we print crap"<< endl;
		}
};


int main(){
	
	/*
		one way to call a fn from a class is by making object and then using dot separator to call the fn from object
	*/
	sally sallyObject;
	sallyObject.printCrap();// this is how we access stuff in sally class
	
	
	/*  
		another way
		we can also access the sally class by creating pointer to sally object and then calling the fn from the 
		pointer using -> operator 		
	*/
	
	
	sally * sallyPointer = &sallyObject;
//sallyPointer.printCrap(); this will give error because we cant call fn from pointer using ' . ' operator	
//thus whenever we access a class with a pointer to the object then use this ' -> ' arrow to call fn from pointer
	sallyPointer->printCrap();
	
	
	return 0;
}
