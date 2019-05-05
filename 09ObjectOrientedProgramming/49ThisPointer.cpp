/*
 this pointer- its actually a keyword that identifies a special kind of ppoibter,
 that stores the address of the current object you are working with
 
 Basically its saying 
*/
#include<bits/stdc++.h>
using namespace std;


class Hannah{
	
	public:
		Hannah(int num)
		:h(num)
		{
			
		}
		
		void printCrap(){
			cout<< "h = "<< h << endl;//c++ assumes that you are working with current object
			cout<< "this -> h ="<< this-> h << endl;// it is explicitly used to telling c++ that we are working with this current obj and nonetheless its same like above other than the expicitity
			cout<< "(*this).h ="<< (*this).h << endl;
			//(*this)- its derefrencing of the pointer; this is taking that mem loc of current obj which is some long hex decimal and then calling the variables value
		}
		
	private:
		int h;
};

int main(){
	Hannah ho(23);
	ho.printCrap();
	return 0;
}
