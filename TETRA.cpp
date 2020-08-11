#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int a,b,c,A,B,C;
	scanf("%d",&t);
	while(t--)
	{
		cin>>a>>b>>c>>C>>B>>A;
		double d1=a*a+b*b-A*A;
		double d2=a*a+b*b-B*B;
		double d3=a*a+c*c-C*C;
		double trs=sqrt(4*d1*d2*d3)/12;
	    double sum=trs+(a*b*c)/3.0;
	    cout<<fixed<<setprecision(5)<<sum<<endl;
	    	
	}
	return 0;
	
}
