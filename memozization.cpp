#include<iostream>
using namespace std;
int memo[100]={0};
int fib(int n)
{
	if(n<=1)
	   return memo[n];
	else
	    memo[n]=fib(n-1)+fib(n-2);
	
}
int main()
{
	int n;
	cin>>n;
	cout<<"the fibnocci num is "<<fib(n)<<endl;
	return 0;
	
}

