// how to pass array into fn
#include <bits/stdc++.h>
using namespace std;

void printArray(int theArray[], int size); // this is prototyping

int main(){
	int bucky[3]= {20, 54, 675};
	int jessica[6]= {54, 24, 7, 8, 9, 99};
	
	
	//  while calling the function and passing array as an arguement we dont have to write square brackets as 
	//	we alredy told function that first parameter is going to be an array
	printArray(bucky,3);
	cout<<"----------------------"<< endl;
	printArray(jessica,6);
	
	
	return 0;
}

void printArray(int theArray[], int size){ 
// as in parameters we used square brackets to tell fn that as soon as it will take argument its going to be an array 

	for(int x=0; x<size; x++)
	{cout << theArray[x]<< endl;
	}
}
