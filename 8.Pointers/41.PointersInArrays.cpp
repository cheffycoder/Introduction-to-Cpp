#include<bits/stdc++.h>
using namespace std;


int main(){
	int bucky[5];
	int *bp0= &bucky[0];//0x6ffdf0
	int *bp1= &bucky[1];//0x6ffdf4
	int *bp2= &bucky[2];//0x6ffdf8
	
	
	//int takes 4 bytes on my computer thus hexdecimal no gets added by 4 here
	cout<< "bp0 is at" << bp0<< endl;//0x6ffdf0
	cout<< "bp1 is at" << bp1<< endl;//0x6ffdf4
	cout<< "bp2 is at" << bp2<< endl;//0x6ffdf8
	
	bp0 +=2;
	cout<< "bpo is now at "<< bp0<< endl;//0x6ffdf8
	
	/* thus in pointers when we use maths its not adding address thus it wont add 2 bytes i.e wont give (0x6ffdf2)
	   instead it will hop 2 elements ahead now pointing to next to next element i.e this address(0x6ffdf8)
	*/
	return 0;
}
