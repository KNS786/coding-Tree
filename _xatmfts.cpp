#include<iostream>
using namespace std;

int main(){
	int widthraw;
	float balance;
	scanf("%d%f",&widthraw,&balance);
	if( widthraw % 5 ==0 && (widthraw+0.50)< balance)
		cout<<balance-(widthraw-0.50);
	else cout<<balance;
	return 0;
	
}