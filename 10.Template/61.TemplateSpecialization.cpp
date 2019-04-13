// Tmeplate specialization
// we can pass any datatype into a generic class

/* 
	suppose you want to make a fn template that add numbers when you call it but as soon as you call it with a char fn it cant add them and throws error
 	thus now you want to make the same fn work differently for a special type of datatype and for rest like numerical int, float, double it should work 
	same as it did.
*/
#include<bits/stdc++.h>
using namespace std;


template <class T>
class spunky{
	// this class will handle every datatype but as soon as we call a char then it has a specialized class for this
	
	public:
		
		spunky(T x){
			cout<<x<<" is not a character"<<endl;
		}
};

template <>// this tell c++ that we are about to use a template specialization
class spunky<char>{//you tell what type of data you want this class to specialize in

public:
	spunky(char x){
		cout<<x<<" is indeed a character!"<<endl;
	}
	
};
int main(){
	
	spunky<char> so1('q');
	spunky<int> so2(7);
	spunky<double> so3(5.8333);
	
	return 0;
}
