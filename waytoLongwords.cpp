#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
    while(t--){
      string a;
      cin>>a;
       int n=a.length();
     if(n<=10)
       cout<<a<<'\n';
     else 
       cout<<a[0]<<n-2<<a[n-1]<<'\n';
    }
   return 0;

}
