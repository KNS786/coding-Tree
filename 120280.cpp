#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int strlen,m;
		cin>>strlen;
		string str[strlen];
		for(int j=0;j<strlen;j++)
			  cin>>str[j];
				
	     int  mid=strlen/2;
		 int dp[mid][mid]={0};
		 for(int s1=0;s1<mid;s1++){
			 dp[0][s1]=str[s1];
		     dp[1][s1]=str[mid-s1];	 
		 }
		 vector<int>res,res1;
		 for(int d=0;d<mid;d++)
		 {
			if(dp[0][d]==dp[1][d])
			{
				res.push_back(strlen-(d+1));
				res1.push_back(strlen-(d+1));
				
			}else{
				res.push_back(d+1);
				res1.push_back(d+1);
			}			
	
		 }
		 
	   m=max(res1[strlen-1],res[strlen-1]);
	   cout<<m<<endl;
	   for(int w=0;w<res.size();w++)
		   cout<<res[w]<<" ";
	   for(int r=0;r<res.size();r++)
		   cout<<res1[r]<<" ";
	  cout<<endl;
	  
	}
	return 0;
}