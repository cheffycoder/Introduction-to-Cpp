#include<bits/stdc++.h>
using namespace std;

class Birthday{
	public:
		
		Birthday(int m, int d, int y){
			month=m;
			day=d;
			year=y;
		}
		
		void printDob(){
			cout<< month << "/" << day << "/" << year << endl;
		}
		
	private:
		int month;
		int day;
		int year;
		
};

class Name{
	
	public: 
		Name( string x, Birthday object)
		: name(x) , ob(object)
		{
		}
		
		
		void printInfo(){
			cout<< name << " your birthday is on ";
			ob.printDob();
		}
		
		
	private:
		string name;
		Birthday ob;
};

int main(){
	
	Birthday shivamDob( 7, 21, 1999);
	Name ShivamObj("Shivam", shivamDob );
	ShivamObj.printInfo();
	
	return 0;
}
