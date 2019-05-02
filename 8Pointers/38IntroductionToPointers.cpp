// pointers- its a variable that contains memory address as their value

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int fish =5;
	cout<<&fish<<endl;/* this gives the memory address of fish variable and not value i.e this tells 
	where this fish variable is saved in memory*/
	
	int *fishPointer;// this datatype given to pointer is the datatype of the variable it is pointing to here its pointing to fish i.e int
	fishPointer= &fish;
	
	cout<<fishPointer<< endl;
}
