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
		
		Sally operator+(Sally anotherso){// As in this fn we are returning a sally object thus its having a sally return type
			Sally brandNew;
			brandNew.num = num+ anotherso.num;
			return (brandNew);
		}
		
		int num;
		
	private:	
};
int main(){
	
	Sally a(34);
	Sally b(21);
	Sally c;
	
	//c.num = a.add(b);
	c = a+b;
	cout<< c.num << endl;
	
	
	return 0;
}
