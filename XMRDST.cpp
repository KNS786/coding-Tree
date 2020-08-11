#include<bits/stdc++.h>
using namespace std;
int Cal(int val)
{
	return val==0?0:val%10+Cal(val/2);
}
int main()
{
	int t;
    cin>>t;
    while(t--)
	{
		 int n;
	   cin>>n;
		 int cf_sum=0,mt_sum=0;
		 for(int j=1;j<=n;j++)
		 {
			 int chef,morthy;
			cin>>chef>>morthy;
			 int sum1=0,sum2=0;
			 sum1=Cal(chef);
			 sum2=Cal(morthy);
			  
			  if(sum1 > sum2)
			  {
				  cf_sum++;
			  }
			  else if(sum1 < sum2)
			  {
				  mt_sum++;
			  }
			  else{
				  mt_sum++;
				  cf_sum++;
			  }
			    
		 }
		if(cf_sum > mt_sum)
			cout<<0<<" "<<cf_sum;
	    else if(cf_sum < mt_sum)
			cout<<1<<" "<<mt_sum;
		else
			 cout<<2<<" "<<cf_sum;
		 
		cout<<"\n";
		
		
		
	}
	return 0;
	
}