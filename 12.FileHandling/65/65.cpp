#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	 THIS IS THE 2 LINE METHOD TO FIRST MAKE AN OBJECT AND THEN OPEN A FILE
	 WE CAN DO IT IN ONE LINE
	
	ofstream buckysFileObj;// made an obj to access the file
	buckysFileObj open.(buckyFile);// opening the file with the object made
	*/
	
	ofstream buckysFileObj("buckyFile.txt");// this is constructor where we can associate the obj with the file
	// is_open its a way to check that the file is open or not; or we can say that it checks if the obj is assocaited to any file or not
	
	if(buckysFileObj.is_open()){
		cout<<" okay the obj is connected to file and file is open"<<endl;
		// in real development environment we make sure that its open first and now down in here we do all the work	
	}
	else{
		cout<<" the object isn't associated to any file"<<endl;
	}
	
	
	buckysFileObj << "Hey this is the short one line method to create obj and associate obj with the file"<<endl;
	
	buckysFileObj.close();
	
	return 0;
}
