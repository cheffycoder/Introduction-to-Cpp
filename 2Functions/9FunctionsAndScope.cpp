//Functions and their scope

#include <bits/stdc++.h>
using namespace std;
// int printSomethingGalat(); function prototyping this is a copy of our function header

// whenever we dont want the fn to return anything and just print we use void retun type
void printSomething(){
cout<< " I am awesome1" << endl;
}

// whenever the function is returning something we use the return type
int addition(){
	int a=5;
	int b=10;
	int sum= a+b;
	return sum;
}

int main(){
// functions made outside an called here
	printSomething();
	int sumhere= addition(); 
	/* as this function was returning the sum so we saved it in a 
	variable declared locally and then printed that variable to see the return statement int the stream
	*/
	cout<< sumhere<< endl;

/* printSomethingGalat(); calling this function give not declared in scope exception there are 
   methods to save yourself from this exception go below and read the comments  */
return 0;
}

/* 
 if we declare the functions below the main it will throw exception saying printSomethingGalat was 
 not declared in scope
 because compiler reads from top to bottom and has never seen the function you called in main 
 as it is below the main so either cut paste it to top above the main
 
 or create a function prototype that means write 
 void printSomethingGalat(); i.e the return type the function name and the paranthesis with semicolon
 between the using namespace std; and the int main()
 and now after this you can leave your declared function below
*/

void printSomethingGalat(){
cout<< " I am awesome2" << endl;
}




