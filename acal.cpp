#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int sum=0;
    for(int i=1;i<=3;i++)
	  sum+=pow(a,i);
    cout<<sum<<endl;
 return 0;

}