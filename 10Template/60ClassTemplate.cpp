/* some imp stuff to remember while making class templates

	1. every single fn you make, you have to proceed it with this fn template
	   ex. template <class T>
	       T Bucky <T> :: T bigger(){}
	
	2. also you need to have the blank generic datatype after your class name and this tells your fn 
	   that we are indeed working with the classes template parameter 
	   ex. T Bucky<T>:: bigger(){};
	   
	3. whenever you make object then you have to explicitily call your object what type of data to substitute for T
	   ex. Bucky <int> bo(69,105);
	
*/
#include<bits/stdc++.h>
using namespace std;

template <class T>
 
 class Bucky{
 	T first, second;
 	
 	public:
 		Bucky(T a, T b){
 			first= a;
 			second= b;
		 }
		 
		 T bigger();
 };
 
 // we have to make the generic fn defination again everytime we decide to make a fn outside the class which belongs to the class 
template <class T>

T Bucky <T> :: bigger(){ //T Bucky <T> this second T tells c++ that the fn generic type T is same as the class T generic type
 	return (first>second?first:second);	
 }
 
 
int main(){
	//Bucky bo(69,105); this error is stated [Error] missing template arguments before 'bo'
	Bucky <int> bo(69,105); // this is telling c++ anywhere you see T substitute with an integer
	
	
	//cout << bo.bigger; this error is stated [Error] no match for 'operator<<' (operand types are 'std::ostream {aka std::basic_ostream<char>}' 
	//and '<unresolved overloaded function type>')
	cout << bo.bigger();
	return 0;
}
