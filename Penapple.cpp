#include<bits/stdc++.h>
using namespace std;
string str1;
string str2;

int main()
{
    int t;
    cin>>t;
    getline(cin,str1);
    for(int i=0;i<t;i++){
       getline(cin,str1);
       getline(cin,str2);
       
        cout<<"Uh! ";
           for(int i=0;i<str2.length();i++)
              if(str2[i]=='A' || str2[i]=='P')
                  for(int j=i;j<str2.length();j++)
                     cout<<str2[j];
        
        cout<<"-";
       for(int i=0;i<str1.length();i++)
          if(str1[i]=='A'||str1[i]=='P')
             for(int j=i;j<str1.length();j++)
               cout<<str1[j];
               
        cout<<"!"<<endl;
     
        
    }
    return 0;
}
