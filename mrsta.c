#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<assert.h>
#define ll long long

ll int ir=(1<<29);


int findFts(int arr[],int n){
	
  for(int i=0;i<n;i+=2)
	  if(arr[i]!=arr[i+1]) return arr[i];
	
	 
}
int main(){
	int T;
	scanf("%d",&T);
	for(int gh=0;gh<T;gh++){
		
		int N;
		scanf("%d",&N);
		int arr[N];
		for(int uk=0;uk<N;uk++) scanf("%d",&arr[uk]);
		printf("%d",findFts(arr,N));
		
	}
	exit(0);
	
}