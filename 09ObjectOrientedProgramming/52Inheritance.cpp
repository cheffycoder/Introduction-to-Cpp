//Inheritance- It is the idea that you can inherit things from another class
//instead of copying and pasting them all we just make another class who inherit the previous class

#include<bits/stdc++.h>
using namespace std;



class Mother{
	//this is the base class
	public:
		
		void sayName(){
			cout<<"I am a Roberts"<<endl;
		}
	
};

class Daughter: public Mother{// this public means all the public stuff in base is going to be public in derived
	// this is the derived class which is getting all the variables and fn in base class
	// as we make this derived class then all the public fn or variables are now inherited
	// constructors of base class isnt inherited 
	public:
		
		
		
		
		
};


int main(){
	Mother mom;
	mom.sayName();
	Daughter tina;
	tina.sayName();
	
	return 0;
}
