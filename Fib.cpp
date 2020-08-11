#include<iostream>
using namespace std;
int x,y;
int fib(int n){
	if(n<=1)
	  return n;
	else
	{
		x=fib(n-1);
		y=fib(n-2);
		
	}
	return x+y;	
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<" ";
	return 0;
}
