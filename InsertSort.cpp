#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	
	int currentVal,i,j;
	for(i=1;i<n;i++){
		currentVal=arr[i];
		 j=i-1;
		  for(j;j>=0 && arr[j]>currentVal;j--)
		     arr[j+1]=arr[j];
		arr[j+1]=currentVal;
	    
	}
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
  
   return 0;
  
}
