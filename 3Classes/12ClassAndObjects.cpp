// classes tutorial
/* classes are basically an easy way to group all your function and variables together
*/
#include <bits/stdc++.h>
using namespace std;

class ShivamClass{
	public: // this means you can use all this outside the class for example main 
	void coolSaying(){
			cout << "Preachin to the choir" << endl;
		
	}
};

int main(){
	
	// here we make objects to access the public variables and functions from a class 
	ShivamClass shivamobject; // we first write class name and then the object name
	// we can have multiple classes and we can have functions with same names in diff classes 
	// thats why we first write class name so as to specify which class object it is and which fn to call
	shivamobject.coolSaying();// this is fn call, here we write object and then dot separator and the fn 
	// so as to tell compiler that we want the fn coolSaying and we want it to come from Shivam class 
	return 0;
}
