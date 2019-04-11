#include<bits/stdc++.h>
using namespace std;


class Mother{
	
	public:// any where in prog you can acess this.
		   // any other file i.e any other class can access this
		int publicv;
		
	protected:// anything inside this class can acess this
			  // any class which is inheriting this class will inherit this 
		
			int protectedv;
	private://only this file or this class can access this 
			//inherited class won't access this
			int privatev;
};

class Daughter: public Mother{
	
	public:
		void doSomething(){
			
				publicv=1;//accessing public member from base class
				
				protectedv=2;//accessing public member from base class
				
				//privatev=3; this is going to throw error as derived class cant access the private members of base class 
		}
};
int main(){
	
	Daughter tina;
	tina.doSomething();
	
	
	return 0;
}
