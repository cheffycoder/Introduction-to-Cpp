/* 
   operator overloading- it allows you to take these operators and change the way that they are used
   like assume we want to add 2 objects together- how the heck? will c++ know how to add both of them
   + is only used to add variables and dont know how to add objects
*/

#include<bits/stdc++.h>
using namespace std;

class Sally{
	
	public:
		Sally(){
			
		}
		
		Sally(int a)
		{
			num=a;
		}
		
		Sally operator+(Sally anotherso){
		// As in this fn we are returning a sally object thus its having a sally return type
			Sally brandNew;
			// this is a local object created to store the num value
			brandNew.num = num+ anotherso.num;
			//here num is value of a object
			// anotherso.num is value of b object
			// and both a.num+b.num value is stored in brandNew.num
			// now this overloaded fn is returning modified brandNew object whose num= a.num+b.num;
			// and then it is stored in c object created in main
			// thus ir becomes c.num=a.num+b.num;
			return (brandNew);
		}
		
		int num;
};
int main(){
	
	Sally a(34);
	Sally b(21);
	Sally c;
	// this c object is created
	// now when c= a+b; this actually stores the brandNew.value 
	// as the + fn is returning an object thus c is used to store it
	
	//c.num = a.add(b);
	c = a+b;
	//now as we returned brandnew whose num is equal to a.num+b.num and it is passed to c thus c.num-a.num+b.num;
	cout<< c.num << endl;
	
	
	return 0;
}
