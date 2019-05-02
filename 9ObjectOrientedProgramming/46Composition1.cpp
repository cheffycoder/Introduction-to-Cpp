//composition- aside from fn and members aka variables a class can also have objects from other classes 

#include<bits/stdc++.h>
using namespace std;

class Birthday{
	
	public:
		Birthday(int m, int d, int y){
			
			month = m;
			day = d;
			year = y;
		}
		
		
		void printDate(){
			cout<< month<< "/"<< day<< "/"<<year<< endl;
			
		}
		
	private:
		int month;
		int day; 
		int year;
};

class People{
	public:
		People(string x , Birthday bo)
		// every time you are using a class object inside another class then we have to use member intializer
		:  name(x), dateOfBirth(bo)
		{
			
		}
		
		void printInfo(){
			cout<< name << " you were born on " ;
			dateOfBirth.printDate();
		}
	private:
		
		string name;
		Birthday dateOfBirth;		
};


int main(){
	
	Birthday birthObject(7, 21, 1999);
	People shivamObject( "Shivam" , birthObject );
	shivamObject.printInfo();
	
	
	return 0;
}
