#include<iostream>
using namespace std;

int LCS(string s1,string s2)
{
	int m=s1.length();
	int n=s2.length();
	int arr[n+1][m+1];
	for(int i=0;i<=n;i++) arr[i][0]=0;
	for(int j=0;j<=m;j++) arr[0][j]=0;
	
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m;j++)
	   {
	   	  if(s1[i]==s2[j])
	   	     arr[i][j]=arr[i-1][j-1]+1;
	   	  else 
	   	      arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
	   	      
	   }
	    	
return arr[n][m];
}
int main()
{
	string a;
	cin>>a;
	string b;
	cin>>b;
	
	int subseq=LCS(a,b);
	cout<<subseq<<endl;
	return 0;
	
}

