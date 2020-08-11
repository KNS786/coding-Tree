#include<iostream>
using namespace std;
class BTree{
	int * key
	int t;
	BTree ** c;
	int n;
	bool leaf;
	  public:
	  	 BTree(int root,bool brachFactor);
	  	 void insertNonFull(int k);
	  	 void splitChild(int i,BTree * y);
	  	 void traverse();
	  	 
	  	 BTree * search(int k);
	  	 friend class Bin_Tree;
	  	   	 
};
class Bin_Tree{
	BTree * root;
	int t;
	public:
		Bin_Tree(int temp){
			root=NULL;
			t=temp;
		}
		void traverse(){
			if(root!=NULL)
			  root->traverse();
		}
		BTree * search(int k){
			return (root==NULL)?NULL:root->search(k);
			
		}
		void insert(int k);
};
BTree::BTreeTre(int t1,bool leaf1){
	t=t1;
	leaf=leaf1;
   
    key=new int[2*t-1];
    c=new BTree * [2*t];
    n=0;
    
} 

void BTree::traverse(){
	int i;
	for(i=0;i<n;i++)
	{
		if(leaf==false)
		  c[i]->traverse();
		  cout<<" "<<keys[i];
		  
		
	}
	if(leaf==false)
	  c[i]->traverse();
	  
}
BTree * BTree::search(int k){
	int i=0;
	while(i<n && k>key[i])
	  i++;
	if(keys[i]==k)
	  return this;
	if(leaf==true)
	  return NULL;
	  if(!c[i]->search(k))
	     return 1;
	  else
	     return 0;
} 
void Bin_Tree::insert(int k){
	if(root==NULL)
	   {
	   	root=new BTree(t,true);
	   	root->key[0]=k;
	   	root->n=1;
	   }else {
	   	if(root->n==2 * t-1){
	   		BTree * s=new BTree(t,false);
	   		s->c[0]=root;
	   		s->splitChild(0,root );
	   		
	   		int i=0;
	   		if(s->key[0]<k)
	   		  i++;
	   		s->c[i]->insertNonFull(k);
	   		
	   		root=s;
	   		
		   }else{
		   	root->insertNonFull(k);
		   }
	   }
	void BTree::insertNonFull(int k){
		int i=n-1;
		
		if(leaf==true)
		{
			while(i>=0 && key[i]>k)
			{
				key[i+1]=key[i];
				i--;
			}
			key[i+1]=k;
		    n=n+1;
		    
		
		
		}else{
			while(i>=0&& key[i]>k)
			   i--;
		    if(c[i+1]->n==2*t-1){
		    	splitChild(i+1,c[i+1]);
		      
			  if(key[i+1]<k)
			  i++;
			  	
			}
			c[i+1]->insertNonFull(k);
			
		}
	}
	void BTree::splitChild(int i,BTree * y){
		BTree * z=new BTree(y->t,y->leaf);
		z->n=t-1;
		
		for(int j=0;j<t-1;j++)
		   z->key[j]=y->key[j+t];
		
		if(y->leaf==false){
			for(int j=0;j<t;j++)
			  z->c[j]=y->c[j+t];
			  
		}
		y->n=t-1;
		for(int j=n;j>i+1;j--)
		  c[j+1]=c[j];
		
		c[j+1]=z;
		
		for(int j=n-1;j>=i;j--)
		  key[j+1]=key[j];
		key[i]=y->key[t-1];
		n=n+1;
		
		
	}
}

int main(){
	Bin_Tree t(3);
	t.insert(10);
	t.insert(20);
	t.insert(3);
	t.insert(8);
	t.insert(7);
	t.insert(2);
	t.insert(22);
	t.insert(39);
	t.insert(12);
	t.insert(13);
	t.insert(212);
	t.insert(4);
	t.insert(14);
	t.insert(6);
	
	cout<<"The B-Tree is : ";
	t.traverse();
	int  n;
	cin>>n;
	  if(t.search(n))
	    cout<<"true"<<endl;
	  else
	     cout<<"false"<<endl;
   return 0;
   	
}
