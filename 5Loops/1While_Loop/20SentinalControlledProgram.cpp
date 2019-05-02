// sentinal controlled program
/* if we write a program where we dont know how long we need to run the code and its user entry
and as soon as user enter -1 the loop stops
*/
#include<bits/stdc++.h>
using namespace std;
// age averager
int main(){
	
	int age;
	int ageTotal=0;
	
	int numberOfPeopleEntered=1;
	
	cout<< "Enter first person age or -1 to quit"<< endl;
	cin>> age;
	
	while(age!=-1){
		ageTotal+=age;
		numberOfPeopleEntered++;
		
		cout << "Enter next person age or -1 to quit"<< endl;
		cin>> age;
	}
	
	cout<< "\n Number of people entered" << numberOfPeopleEntered<< endl;
	int averageAge=0;
	averageAge= ageTotal/numberOfPeopleEntered;
	cout<<"Average of Age is "<< averageAge<< endl;
	
	return 0;
}
