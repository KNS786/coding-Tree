/* Time complexity
   O(m(n-m+1))
*/

#include<bits/stdc++.h>
using namespace std;

void NaiveStringsearch(string Text,string pattern)
{
	int N=strlen(Text);
	int M=strlen(pattern);
	 for(int s=0;s<=N-M;s++)
	 {
	 	
	 	 for(int j=0;j<M;j++)
	 	 {
	 	 	if(Text[s+j] != pattern[j])
			    break;
			if(j==M)
			   cout<<"Pattern presents : " <<j<<endl;	 
		}
	 }
	
}
int main()
{
	string str1;
	cin>>str1;
	string str2;
	cin>>str2;
	NaiveString(str1,str2);
    
return 0;

}
