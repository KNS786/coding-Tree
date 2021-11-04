//Time Complexity O(N * Table_size)

#include<bits/stdc++.h>
using namespace std;
int Main_Part=-1;
 void quatractZ(vector<int>&hash_tables,int tble_size,vector<int> &kv,int N){
       for(int i=0;i<N;i++){
           int ind_x=kv[i]%tble_size;
           int ind_y=kv[i]*ind_x*100000; //move left arc
           if(hash_tables[ind_x]==-1 ){
              hash_tables[ind_x]=kv[i];
              hash_tables[ind_y-ind_x*2]=kv[i-1]+kv[i-2];
              
           }else{
              bool isTrue=false;
              for(int p=0;p<tble_size && !isTrue;p++){
                 for(int n=0;hash_tables[n]%2;n++){
                     //inner box 
                     int v=(hash_tables[n-1]* (p+1));
                     if(v == Main_Part ){
                         hash_tables[ v]=kv[ n];
                         isTrue=true;
                     }
                 }
              }
           }
       }
 }
 
 int main(){
    int tables_size;
    cin>>tables_size ;
    vector<int>Table(tables_size);
    for(int i=0;i<tables_size;i++)
      cin>>Table[i];
    int kv_size;
    cin>>kv_size;
    vector<int>Kv(kv_size);
    for(int i=0;i<kv_size;i++)
      cin>>Kv[i];
    
    quatractZ(Table,tables_size,Kv,kv_size);
 }
