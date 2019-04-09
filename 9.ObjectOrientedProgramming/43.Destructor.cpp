//destructors- it is basically a code that runs automatically runs upon the destruction of an object

#include<bits/stdc++.h>
using namespace std;


class sally{
	
	public:
		
		//constructor
		sally(){
			cout<<"I am the constructor"<< endl;
		}
		
		//destructor
		//note: destructor never ever has parameters and also there is no such thing as destructor overloading 
		// dont even put void as the return type, its just basically some dumb fn
		~sally(){
		cout<<"I am the destructor"<<endl;	
		}	
};
int main(){
	
	sally sallyObject;
	cout<<"Omg!! wtf is on my shoe"<< endl;
	
	
	// as soon as the compiler see its getting to the end of the program destructor will be called automatically
	return 0;
}
