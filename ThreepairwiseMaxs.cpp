#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        vector<int>a;
        for(int i=0;i<3;i++)
         {
           int n;
           cin>>n;
           a.push_back(n);
         }
       sort(a.begin(),a.end());
       if(a[1]!=a[2])
       {
         cout<<"NO"<<endl;

       }else{

         cout<<"YES"<<'\n'<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
      }

    }
return 0;
}

