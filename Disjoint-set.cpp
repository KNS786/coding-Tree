#include<iostream>
using namespace std;

class DisJoint{
    int * rank;
    int * parent;
    int n;
 public:
    int len=0;
   public:
   	  DisJoint(int n)
   	  {
   	  	this->n=n ;
   	  	rank=new int[n];
   	  	parent=new int[n];
   	  	 makeSet();
	  }
	void makeSet()
	{
		for(int i=0;i<n;i++)
		   parent[i]=i;
		   
	}
	int find(int x)
	{
		if(parent[x]!=x)
		   parent[x]=find(parent[x]);
	
	  return parent[x];
	}
	
	void Union(int val1,int val2)
	{
		int set1=find(val1);
		int set2=find(val2);
		
		if(set1==set2)
		{
			return;
		}
		else if(rank[set1] < rank[set2] )
		{
			parent[set2]=set1 ;
		}
		else
		{
			parent[set2]=set1;
			rank[set1]+=1;
			
		}
	len++;
	}
	
	void display(){
	 
	  	cout<<"Rank values :";
		for(int i=0;i<len;i++)
		   cout<<rank[i]<<" ";
		cout<<endl;
		cout<<"parent values :";
		  for(int i=0;i<len;i++)
		     cout<<parent[i]<<" ";
		
	}
	
};
int main()
{
	  DisJoint obj(10);
	  obj.Union(2,3);
	  obj.Union(1,4);
	  obj.Union(8,2);
	  obj.Union(0,2);
	  obj.Union(9,3);
	  
	  int n,n1;
	  cin>>n>>n1;
	    if(obj.find(n)==obj.find(n1))
		   cout<<"YES"<<'\n';
		 else
		    cout<<"NO"<<'\n';
		    
	cout<<"Print the  Rank and parent values in the set "<<endl;
	obj.display();
	    
   return 0;
    
}
