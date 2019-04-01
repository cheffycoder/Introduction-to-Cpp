#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int tuna[5]={20, 54, 76, 832 , 546};
	int sum= 0;
	
	for(int i=0; i<5; i++){
		sum= sum+ tuna[i];
	}
	
	cout<< " The sum of array elements is "<< sum<< endl;
	return 0;
}
