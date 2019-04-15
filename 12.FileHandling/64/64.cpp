// FILE HANDLING- Working with files
/*
	This is used because files are what are used to save data on computer.
	we cant actually store permanent data in a variable because as soon as we close the program all data is wiped out
	instead we want something that can save data permanently. files stores data to hard drive which can we retrieved after a shut down
*/

//#include<fstream>header file for file input and output
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//first thing is you have to make an object as c++ cant diretly work with file
	
	ofstream buckyFileObj;//this is how you create a file object aka access to a file so that you can access a file and work on it
	
	
	// now we are associating this obj with a file because there are million files and we are telling that this obj is working with which file
	buckyFileObj.open("tuna.txt");// this is how you open a file using your object, if the file don't exist then it creates one
	//now any input and output to this obj is an input and output to the file
	//now buckyFileobj=tuna.txt
	
	buckyFileObj<<"I love tuna and tuna loves me! \n";// this won't print anything on screen. This is inputing this message to the file tuna.txt
	
	
	//now we have to close that obj we were working with to free some memory
	buckyFileObj.close();
	return 0;
}
