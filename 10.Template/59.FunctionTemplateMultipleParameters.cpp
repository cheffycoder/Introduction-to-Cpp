// How to work with fn templates having diff datatypes

#include<bits/stdc++.h>
using namespace std;


template<class FIRST , class SECOND>// this is 2 types of generic classes and save the hasle to make tons of overloaded fn

// NOTE: this below fn will return the first argument datatype
FIRST smaller(FIRST a, SECOND b){
	return(a<b?a:b);
}




/*
//NOTE: this fn below will return the second argument datatype
SECOND smaller (FIRST a, SECOND b){
	return(a<b?a:b);
}
*/



int main(){
	
	int x= 89;
	double y= 56.78;
	cout<< smaller(x,y)<<endl;
	
	
	return 0;
}
