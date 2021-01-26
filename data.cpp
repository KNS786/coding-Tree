#include<bits/stdc++.h>
using namespace std;

int permuate(string str,int left,int right){
	
	//base case  for each stack printed string
	if(left==right) cout<<a<<endl;
	
	//iteration of the each string
	//for each iteration ABC => (A)BC ,(B)AC,(C) AB 

	for(int i=left;i<=right;i++){
         
       swap(str[i],str[l]);
       permuate(str,left+1,right);
	  swap(str[i],str[l]);
		
	}
	
	
}

int main(){
	string str;
	cin>>str;
	int n=str.size()-1;
	permuate(str,0,n);
	return '\0';
}