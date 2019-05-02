// how to make a custom file structure

#include<bits/stdc++.h>
using namespace std;

int main(){
	ofstream theFile("player.txt");
	cout<<"Enters players ID, Name, Money"<< endl;	
	
	//we are making an end of file marker to stop this program else this would run forever and will input whatever character they write after that too
	//now we are basically telling them to press ctrl+Z because this is how we add an end of file marker. as soon as they press this entering data to file will be cut
	cout<<"press Ctrl+Z to quit"<<endl;
	
	int idNumber;
	string name;
	double money;
	
	while(cin>> idNumber>> name >> money){
		// this will get as many characters as the user types and this will stop running only when the user reaches the endOfFile which is pressing Ctrl+z
		theFile << idNumber<< " "<< name<< " "<< money<< endl;	
	} 
	 
	 
	 
	return 0;
}
