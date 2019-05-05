// const - constant keyword
// this makes sure that whatever is constant is unable to be modified and if we try we get an error

/*
  Objects we create, some of them we want to not be able to be modified
  and whenever we have a constant object we cant call normal fn with them i.e
  we can call only constant fn which themselves are constant so constant object need constant fn's
  
*/


#include<bits/stdc++.h>
using namespace std;



class sally{
	
	public:
		void printShit(){
			cout<<"This is regular fn"<< endl;
		}
		
		void printShit2() const{ // this is how you make const fn
			cout<<"This is constant fn"<< endl;
		}
};

int main(){
	const int x=3;
	//x=5; if we try to change the constant assigned keyword we get an error
	cout<< x << endl;
	
	sally so;
	so.printShit();
	
	const sally object; 
	// object.printShit(); this line will give error as this object is const and it cant call normal fn
	object.printShit2();// this object and fn both are const thus we dont get an error	
	
	return 0;
}
