#include<iostream>
#define MAX 100
using namespace std;
int dp[MAX]={0};
int LIS(int arr[],int n){
	  int max_ending_here=0;
	  int res=0;
      for(int i=0;i<n-1;i++)
      {
      	   if(arr[i] < arr[i+1] ){
      	      max_ending_here++;
      	      dp[i]=arr[i+1];
      	      continue;
      	  }
      	 res++;
			  
	  }
   
    res=n-res;
    return max(res,max_ending_here)+1;

}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	int k=LIS(arr,n);
    for(int i=0;i<k;i++)
	  cout<<dp[i];	
	return 0;
	
}


