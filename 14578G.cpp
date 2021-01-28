#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(vector<int>arr,int N){
	  vector<int>dp;
	  vector<int>remove_elemnts;
	  
	  bool isFound=false;
	  int val;
	for(int i=0,j=0;i<N;i++){
	  if(i > 0){
	   for(int k=0;k<N;k++){
		 if(i !=k){
           if(arr[i] % arr[k]==0)
			   dp.push_back(arr[i]);
		   else if(arr[k] % arr[i]==0) dp.push_back(arr[i]);
	       remove_elemnts.push_back(arr[k]);
		  }
		 }
		}
		++j;
		if(i !=j) // this whole programming run recusion method we can implemeted in Iteration
		{
			while(j<N){
				if(arr[i] % arr[j]!=0) remove_elemnts.push_back(arr[j]);
				else if(arr[j] % arr[i] !=0) remove_elemnts.push_back(arr[i]);
			++j;
			}
		}
		
	}

	cout<<dp.size()-remove_elemnts.size()<<endl;
	  
}

int main(){
	
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int N;
		scanf("%d",&N);
		vector<int>arr;
		int val;
		for(int i=0;i<N;i++){
			scanf("%d",&val);
			arr.push_back(val);
		}
	  makeBeautiful(arr,N);
		
	}
  return '\0';	
}