#include<bits/stdc++.h>
using namespace std;

class ShivamClass{
	/* making class variables public is not good practice
	   so people make their variables private
	public:
		string name;
	*/	
	
	/* now as soon as we declare variables private we cant access them outside the class
	 thats why we make public functions inside class to access these private variables*/
	public: 
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
	ShivamClass so;
	so.setName("Shivam bandral");//we made this public fn to access the private variable and change it 
	cout<<so.getName();// here we made another fn to print the private variable
	
	/*ShivamClass so;
	so.name = " Shivam bandral";
	cout<< so.name;
	*/
	return 0;
}
