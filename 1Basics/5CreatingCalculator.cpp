/*
Taking values to be added from the user itself.
*/
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<< "Enter your first number\n";
	cin>> a;
	
	cout << "Enter another number\n";
	cin>> b;
	
	int sum = a+b;
	cout << "sum is"<< " " <<sum;
}
