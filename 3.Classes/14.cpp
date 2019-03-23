// constructor tutorial

#include<bits/stdc++.h>
using namespace std;

class ShivamClass{
	
	public: 
		// contructor never have a return type
		// this calls itself as soon as we make an object
		
		ShivamClass(){
			cout<< "This will get printed automatically"<< endl;
			
		}
		
		// basically constructors are to give variables an intial value
		
		ShivamClass(string z){
			setName(z);
		}
		
		void setName(string x){
			name  = x;
		}
		
		string getName(){
			return name;
		}
	private:
		string name;
};

int main(){
	/* we can make multiple objects from a class and they wont overwrite each other as they have their own
	set of variables*/
	
	ShivamClass so("Khushi Bandral");
	//so.setName("Shivam bandral"); 
	cout<<so.getName()<< endl;
	
	/*now whenever we create an object that object has its own set of variables and fn
	and thats why Khushi Bandral wont be overwritten*/
	 ShivamClass so2("Lucky me");
	 cout<<so2.getName();
	

	return 0;
}
