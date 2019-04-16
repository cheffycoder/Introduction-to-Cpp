// How to read a custom data


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	/*
	ofstream- this is the stream which we use to output a data from a stream to a file. Ex: when we have a txt that we are writing to a file
	thus this is writing to a file
	
	
	ifstream- its the stream that allow to read data from a file and read it into the computer memory
	and this is reading from a file
	*/
	
	ifstream theFile("player.txt");
	int id;
	string name;
	double money;
	
	while(theFile>>id>>name>>money){
		//we have a file pointer which starts at the file beginning
		//every file has endoffile marker and as soon as we get there it returns a null pointer
		
		cout<<id<<","<<name<<","<<money<<endl;
		
	}
	//NOTE: as soon as the c++ reaches the EOF it senses automatically and this loop will stop
	//as soon as this file reaches EOF then the deconstructor is automatically called and that is going to call the file.close() method

	return 0;
}
