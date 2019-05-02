// TEMPLATE

#include<bits/stdc++.h>
using namespace std;

/*
	 Here we want to make a addition calculator 
	 we first made a fn adding 2 integers and soon realized we have to make these fn for each data type like double, float, long long etc
	 INSTEAD OF THAT HOW COOL IT WOULD BE TO MAKE A FN WITH GENERIC DATATYPE WHICH WOULD AUTOMATICALLY GET ITS DATATYPE FROM THE PARATMETERS
	 THUS SAVING OUR LOAD TO DEFINE THE FN IN EACH DATATYPE 
*/

/* 	
	THIS FN ADD 2 INTEGERS BUT NOW WE WANT SOME TEMPLATE THAT USES A GENERIC(USER DEFINED) 
	DATATYPE SO THAT WE DONT HAVE TO MAKE THIS FN FOR DIFF DATATYPES 
	int addCrap(int x, int y){
	return (x+y);
}
*/

template <class Bucky>// this is building a genric datatype 
//NOTE: WE CAN ALSO WRITE AS- template< typename Bucky>


Bucky addCrap (Bucky a, Bucky b){
	//now this generic type of data is automatically substituted by any req datatype
	return (a+b);
}


int main(){
	
	cout<< addCrap(8,7)<<endl;// c++ see that 8 and 7 are int thus it substitutes bucky genric datatype with int
	cout<< addCrap(5.4,6.8)<<endl;// now here bucky generic datatype is substituted by double datatype
	
	
	//cout<< addCrap(5.4,6)<<endl;
	//[Error] no matching function for call to 'addCrap(double, int)'
	//this will throw error because first a is double and b is int and thus now c++ dont know bucky should be replaced by what!!
	
	
	return 0;
}
