#include<bits/stdc++.h>
using namespace std;

int N=(1<<29);

int dp[N]={0};
int cnt[N]={0};

int beautiFul(){
	int n,val;
     cin>>n;
	 for(int i=0;i<n;i++){
		 cin>>val;
		 cnt[val]++;
	 }
	 
	 for(int j=1;j<N;j++){
		 dp[j]=dp[j]+cnt[j];
		 for(int k=2*i;k<N;k++){
			 dp[k]=max(dp[j],dp[k]);
		 }
	 }
	 
	cout<<n-*max_element(dp,dp+N)<<endl;
}
int main(){
	int T;
	cin>>T;
   for(int i=0;i<T;i++) beautiFul();
   return 0;
   
	     
}