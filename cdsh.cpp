#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,sublist;
	scanf("%d%d",&N,&sublist);
    int arr[N];
	for(int i=0;i<N;i++) scanf("%d",&arr[i]);
	
	set<int>s;
	vector<int>b;
	for(int i=1;i<=N;i++){
		  for(int j=i-1;j<sublist+i-1 ;j++){
			  s.insert(arr[j]);
			  if(sublist+i-1==N) break;
		  }
		b.push_back(s.size());
		s.clear();
	}
  int max_element;
  if( !s.empty()){
     max_element=*(s.rbegin());
	 
 }
 cout<<max_element<<'\n';
 
  return 0;
  
}