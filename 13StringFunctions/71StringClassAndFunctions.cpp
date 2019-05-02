//core string fn


#include<bits/stdc++.h>
//#include<string>- this gives you string fn 
using namespace std;

int main(){
	
	
	
	/*				CIN - this will take values until first white space comes
					GETLINE(CIN, stringname); - this will take values and give it to stringname until it sees new line or user press enter
	
	
	string x;
	string bucky;
	cin>> bucky;
	// whenever we are using cin the end of the input is determined by the first whitespace character it read
	cout<<"This cin will read until first white space i.e - "<< bucky<<endl;
	
		
	// when you want to read an entire line of data
	getline(cin, x);
	//this is going to wait until we press enter and will print till then
	cout<< "Getline(cin, x) will read the whole line i.e- "<<x << endl;
	
	*/
	
	
	
	/*				ASSIGN FN()- string1name.assign(string2name)   this will copy string2name to string1name
	
	
	//additional ways to create and copy strings
	string s1("hamster");//this is how we create a string
	string s2;//empty string
	string s3;//empty string
	
	s2=s1; //this is how we copy s1 to s2 
	
	s3.assign(s1);// this is additional way to copy one string to another
	
	cout<< s1 << " " << s2<< " " << s3 << endl;
	*/
	
	
	
	
	
	/*				AT()-  stringname.at(index)   this will return the element at provided index 
	
	
	//string are indeed arrays of character
	string s4= "omgwtfbbq";
	cout<< s4.at(3)<< endl;// its going to find what character is at 3rd index
	cout<< s4[3]<< endl; 
	
	for(int x=0; x<s4.length(); x++){
		
		cout<< s4.at(x);
		
	}cout<<endl;
	*/
	
	
	return 0;
}
