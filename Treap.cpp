/*Tree+heap=Treap*/
/* Time complexity && space compexity 
    space -A(O(n)) W(O(n))
    search-A(O(lg n)) W(O(n))
    insert(O(lg n)) W(O(n))
    Delete  O(lg n) O(n)
    
 */
#include<bits/stdc++.h>
using namespace std;
int INF=(1<<29);
int cal=0;
class Node{
	  public:
	  	  int value;
	  	  int key;
	  	  Node * left;
	  	  Node *  right;
	  	  struct Node * Heap;
	  	  Node(int data)
	  	  {
	  	  	  this->value=data;
	  	  	  this->key=-INF;
	  	  	  left=NULL;
	  	  	  right=NULL;
	  	  	  Heap=NULL;
	  	  	  
	       }
};
struct Heap{
	int key;
    struct Heap * left;
    struct Heap * right;

};
Heap * createHeap(int key)
{
    struct Heap * NewHeap=(struct Heap*)malloc(sizeof(struct Heap));
	NewHeap->left=NULL;
	NewHeap->right=NULL;
	NewHeap->key=-INF;
		
};

Heap * MaxHeap(Node * Heaps,int keys)
    {
    	if(!Heaps)
    	  return createHeap(keys);
    	if(Heaps->key < keys)
    	   Heaps=MaxHeap(Heaps->right,keys);
    	if(Heaps->key > keys)
    	  Heaps=MaxHeap(Heaps->left,keys);
    	  

};

class Treap:public Node,Heap{
	public:
       Treap * root;
       
    void insert(Node * root,int data)
	{
	       if(!root)
		    {
		      root=new Node(data);   
			  return this;	
		    }
		    if(root->value > data)
		       root=insert(root->left,data);
		    if(root->value < data)
		       root=insert(root->right,data);    
    }
	void AvlRotate(Node * root)
	{
	   /*x-->y(xi+1,xi)  y--->x(yi,yi+1)*/
	   Node * x=root->left;
	   Node * y=root->right;
	          
	    while(root->left)
	    {
	          	 while(x->left)
	          	 {
	                  y->right=x->left;
	                  y->left=x->right;
	                  x=x->left;	 	
		       	}
		        while(x->right)
		        {
		        	y->left=x->right;
		        	y->right=x->left;
		        	x=x->right;
				}
			if(x->left==NULL && x->right==NULL)
			    break;
			  
		}
		while(root->right)
		{
			while(y->right)
			{
				x->right=y->left;
				x->left=y->right;
			   y=y->right;
			}
			while(y->left)
			{
				x->left=y->right;
				x->right=y->left;
				y=y->right;
			}
			if(y->right==NULL && y->left==NULL)
			    break;
			    
		}
	 root->left=x;
	 root->right=y;
	      	
	}
};

struct LINK{
	int ** heap_key;
	int ** BST_key;
	struct LINK * next;
};
LINK * createLink(Heap* mxHeap,Node* Bst )
{
    struct LINK * link=(struct LINK*)malloc(sizeof(struct LINK));
    link->heap_key[cal]=(struct mxHeap*)malloc(sizeof(struct mxHeap));                    
    link->BST_key[cal++]=(struct Bst *)malloc(sizeof(struct Bst));
    link->next=NULL;
    cal++;
};
int find(LINK * head,int key)
{   
	 if(head==NULL)
	{
		return 0;
	}
	for(int i=0;i<cal;i++)
	{
		if(head->heap_key[i] == key)
		    return i;
	}
  return 1;
  

}

LINK * deleteLink(LINK * head,Heap * heap,int Link_key)
{
	int getKey=find(head,Link_key);
     if(getKey)
        {
        	head->heap_key[getKey]=0;
        	AvlRotation(heap);
		}
	  else{
	  	cout<<"enter correct LINK key  ";
	  	
	  }
		
};

int main()
{
	int input_;
	cin>>input_;
	Node n1(input_);
    Treap tr;
    tr.insert(10);
	tr.insert(20);
	tr.insert(30);
	tr.insert(40);
	tr.insert(30);
	tr.insert(4);
	tr.insert(1);
	tr.insert(2);
	tr.insert(9);
	tr.insert(12);
	tr.insert(32);
	tr.insert(27);
	    
	struct * Heap hp=NULL;
	hp=MaxHeap(heap,10);
	hp=MaxHeap(heap,23);
    hp=MaxHeap(heap,3);
	hp=MaxHeap(heap,21);
	hp=MaxHeap(heap,13);
	hp=MaxHeap(heap,31);
	hp=MaxHeap(heap,12);
	hp=MaxHeap(heap,6);
	hp=MaxHeap(heap,2);
	hp=MaxHeap(heap,8);
	hp=MaxHeap(heap,11);
	hp=MaxHeap(heap,1);
	
	struct * LINK li=NULL;
	li=createLink(tr,hp);
	li=deletLink(li,hp,6);
  
  return 0;
   
}
