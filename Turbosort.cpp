#include<bits/stdc++.h>
using namespace  std;

//TURO C 

  /* 5---
     _ _ |
    | _| |
    6|_1_|  
    |----3		 

 */
 
int main(){
	int T,num;
	scanf("%d",&T);
    int arr[T];	
	for(int i=0;i<T;i++)
	 scanf("%d",&arr[i]);
    
	   for(int i=0;i<T-1;i++){
		   
		     if( arr[i] > arr[i+1]){
				 
				   for(int k=0;k<=i+1;k++){
					     if(arr[k] > arr[i+1]){
							
							 arr[k] ^=arr[i+1];
							 arr[i+1] ^=arr[k];
							 arr[k] ^=arr[i+1];
							 
						 }
					
				   }
			 }
	   }
	   
	   for(int i=0;i<T;i++)
		    cout<<arr[i]<<'\n';

  return 0;
}