// Exception handling- its a way of handling errors because we don't want our program to crash down

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	
	try{// this is a block where error might occour
		int momsAge =30;
		int sonsAge=34;
		
		if(sonsAge>momsAge){
			throw 99;// it gives an exception reference number
		}
		
		}
		
		catch(int x){// this catch block takes a parameter
			
			
		// this works when we have an error in the try block
		//if there is no error in the try block then the catch block is skipped all together
		
			cout<<"Son can't be older than mom. ERROR NO:"<<x<<endl;
		}
		
	
	
	return 0;
}
