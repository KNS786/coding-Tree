#include<iostream>
using namespace std;

int findOnce(int *arr,int N){
	
	int  mid=N/2;

    int max_a,max_b;
	for(int i=mid-1;i>=0;i=-2)
		if(arr[i]!=arr[i-1])
			max_a=arr[i] > arr[i-1] ? arr[i] : arr[i-1];
		
	
	for(int i=mid+1;i<=N-1;i+=2)
		  if(arr[i]!=arr[i-1])
			 max_b=arr[i] > arr[i-1] ? arr[i] : arr[i-1];
		 
	
	return max_a > max_b ? max_a : max_b;
	
	
	
}


int main(){
	int N,*arr;
	cin>>N;
	arr=(int*)malloc(N*sizeof(int));
	for(int i=0;i<N;i++)
	   cin>>arr[i];
    
	cout<<findOnce(arr,N)<<'\n';
	
	
}