#include<bits/stdc++.h>
using namespace std;


int main(){
	
	ofstream theFileObj("objects.txt");
	
	string name;
	double power;
	
	while(cin>> name >> power){
		theFileObj << name << "  "<< power << endl;	
	}
	
	return 0;
}
