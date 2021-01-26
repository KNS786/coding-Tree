#include<iostream>
using namespace std;

union check{
	int x;
	char y;
};

int main(){
	 check c={'a'};
	 cout<<c.x<<endl;
	 return 0;
	 
}