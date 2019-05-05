// Derived class contructors and Destructors

#include<bits/stdc++.h>
using namespace std;

/*
class GrandMother{
	
	public:
		GrandMother(){
			cout<<" I am the GrandMother constructor"<< endl;
		}
		
		~GrandMother(){
			cout<<" GrandMother deconstructor"<< endl;
		}
		
};
*/


class Mother/*: public GrandMother*/{
	
	public:
		Mother(){
			cout<<" I am the Mother constructor"<< endl;
		}
		
		~Mother(){
			cout<<" Mother deconstructor"<< endl;
		}
		
};

class Daughter: public Mother{
	public:
		Daughter(){
			cout<< " I am Daughter constructor"<< endl;
		}
		
		~Daughter(){
			
			cout<<" Daughter deconstructor"<<endl;
		}
	
};
int main(){
	//	Mother mom; even after we excluded this we are seeing 4 lines bases constructor destructor + derived constructor destructor
	Daughter tina;
	
	// Conclusion is: as soon as we are only making the derived class object, c++ automatically invokes the constructor of the base class 
	// so as to ensure that the derived class object works fine
	//thus as soon as we made tina, it automatically invoked mother class calling its constrctors and deconstructors
	
	/* as soon as we have a hierarchy of classes then if we make daughter object 
		first the ggmother will be invoked,
		then the gmother will be invoked,
		then the mother will be invoked, 
		then the daughter will be invoked,
		then daughter deconstructor,
		then mother deconstructor,
		then gmother deconstructor,
		then ggmother deconstructor,
		
		
		THUS DERIVED CLASS DONT INHERIT THE BASE CLASS INSTEAD BASE CLASS IS SETUP FIRST IN ORDER FOR THE DERIVED CLASS TO WORK PERFECTLY
		
	*/ 
	return 0;
}
