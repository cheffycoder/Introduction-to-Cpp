//friend- a friend of a class is the one thats not a part of the class but still can access the private members of the class

#include<bits/stdc++.h>
using namespace std;

class StankFist{
	public:
		StankFist(){
			stinkyVar=0;
		}
		
	private:
		int stinkyVar;
		
	// WE HAVE TO PROTOTYPE THE FRIEND FUNCTION INSIDE THE CLASS WHOSE FRIEND ITS GONNA BE
	// IN ORDER TO MAKE THE FN FRIEND OF THIS CLASS WE HAVE TO ADD FRIEND BEFORE THE PROTOTYPE
	
	friend void stinkysFriend( StankFist sfo);// this friend fn is taking object as a parameter		
};


void stinkysFriend(StankFist sfo){
	sfo.stinkyVar=99;
	cout<< sfo.stinkyVar << endl;
}


int main(){
	StankFist bob;
	stinkysFriend(bob);
	return 0;
}
