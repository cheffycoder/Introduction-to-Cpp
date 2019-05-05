//multiple parameters tutorial

#include <bits/stdc++.h>
using namespace std;

int addNumbers1(int x, int y){
	int sum= x+y;
	return sum;
}
int addNumbers2(int x, int y){
	cout<< "Enter the first no. \n";
	cin >> x;
	cout<< "Enter the second no. \n";
	cin >> y;
	
	int answer = x+y;
	return answer;	
}

void addNumbers3(int x, int y){
	cout<< " first no. \n";
	cin >> x;
	cout<< " second no. \n";
	cin >> y;
	
	int sum = x+y;
	cout<< " Answer is "<< sum << endl;	
}

int main(){
	cout<<"-----------------addNumbers1 \n\n";
	
	cout<<addNumbers1(43, 86) << endl;
	
	cout<<"-----------------addNumbers2 \n\n";
	
	int x1, x2;
	int answer1;
	answer1 = addNumbers2(x1, x2);
	cout << " The value is "<<answer1<< endl;
	
	cout<<"-----------------addNumbers3 \n\n";
	addNumbers3(x1,x2);
	return 0;
}


