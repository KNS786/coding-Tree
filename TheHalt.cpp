#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		  int no_of_machine;
		  scanf("%d",&no_of_machine);
		  int seconds;
		  scanf("%d",&seconds);
		  
		  int cars[no_of_machine];
		  for(int i=0;i<no_of_machine;i++)
			  cin>>cars[i];
		  sort(cars,cars+no_of_machine);
		  int lowerbound=0,upperbound=0;
		  for(int i=1;i<no_of_machine;i++)
		  {
			  if(cars[i]-cars[i-1]<=seconds)
				  cout<<"YES"<<endl;
			
		  }
	//	(upperbound>lowerbound?cout<<"YES"<<endl:cout<<"NO"<<endl);
		  cout<<"NO"<<endl;
	}
  return 0;
  
}