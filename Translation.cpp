#include<bits/stdc++.h>
using namespace std;
char str1[1000];
char str2[1000];

int main(){
   scanf("%s",str1);
   scanf("%s",str2);
    int i,j;
  int found=1;
   for(j=0,i=strlen(str1)-1;i>=0;i--,j++)
    {
          
         if( str1[i]!=str2[j] )
            {found=0;
            break;}
        
    }
   
     if(found)
      {
        cout<<"YES"<<'\n';
      }
    else{
      cout<<"NO"<<'\n';
    }

  return 0;
}

  
   
