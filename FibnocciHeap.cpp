/* 
   Time complexity
  __________________
  insert - O(1)
  Find MIN - O(1)
  Union   - O(1)
  Extract MIN  - O(lg n)
  Decrease Key - O(1)
  Delete Node - O(lg n)
*/

class Node{
	int n;
	int noOfNodes=0;
	int degree;
	Node * parent;
	Node * child;
	Node * left;
	Node * right;
	bool mark;
	
	char c;
	
};
Node * Heap(){
	Node * nptr;
	nptr=NULL;
	return nptr;
}
Node * createNode(int value)
{
	Node * parents=new Node;
	parents->n=value;
	return parents;
}
Node * insert(Node * Heap,Node * insertNode)
{
	insertNode->degree=0;
	insertNode->parent=insertNode->child=NULL;
	insertNode->left=insertNode->right=insertNode;
	insertNode->mark=false;
	insertNode->c='N';
	if(Heap!=NULL)
	{
		(Heap->left)->right=insertNode;
		insertNode->right=Heap;
		insertNode->left=Heap->left;
		Heap->left=insertNode;
		if(insertNode->n < Heap->n)
		   Heap=insertNode;
	}else{
		Heap=insertNode;
		
	}
	noOfLength++;
	return Heap;
}

Node * fibnocciLink(Node * H1,Node * y,Node * z)
{
	y->left->right=y->right;
	y->right->left=y->left;
	if(z->right==z)
	  H1=z;
	y->left=y;
    y->right=y;
    y->parent=z;
    if(z->child==NULL)
       z->child=y;
    y->right=z->child;
    y->left=z->child->left;
    z->child->left->right=y;
    z->child->left=y;
      if(y->n < z->child->n)
        z->child=y;
    z->degree++;
    
}
Node * Union(Node * h1,Node * h2)
{
	Node * np;
	Node * h=InitializeHeap();
	h=h1;
	h->left->right=h2;
	h2->left->right=h;
	np=h->left;
	h->left=h2->left;
	h2->left=np;
	return h;
	
}
void display(Node * h)
{
	Node * parent=h;
	if(!parent)
	{
		cout<<"The Heap is empty "<<endl;
	   return 0;
	}
	cout<<"the root Node Heaps are :"<<endl;
	do{
		cout<<parent->n<<endl;
		parent=parent->right;
	
	}while(parent!=h && parent->right!=NULL);
}
Node * ExtractMin(Node * h1)
{
	Node * parents;
	Node * ptr;
	Node * z=h1;
	parents=z;
	ptr=z;
	if(z==NULL)
	   return z;
	Node * next=NULL;
	Node * nptr;
	
	if(z->child!=NULL)
	  next = z->child;
	if(next!=NULL)
	   {
	   	nptr=next;
	   	do{
	   		nptr=next->right;
	   		h1->left->right=next;
	   		next->right=h1;
	   		next->left=h1->left;
	   		h1->left=next;
	   		if(next->n < h1->n)
	   		  h1=next;
	   		parents->parent=NULL;
	   		parents=nptr;
	   		
		   }while(nptr!=ptr);
		   
	   }
	z->left->right=z->right;
	z->right->left=z->left;
	h1=z->right;
	if(z==z->right && z->child==NULL)
	  H=NULL;
	else{
		h1 = z->right;
		Consolidate(h1);
		
	}
	nptr--;
	return parents;	
}
Node * Consolidate(Node * h1){
	int dist,in;
	float f=(log(nptr))/(log)(nptr);
	int D=f;
	Node * A[D];
	for(in=0;in<=D;in++)
	  A[i]=NULL;
	Node *  parents=h1;
	Node * y;
	Node * nptr;
	Node * pt=parents ;
	do{
		pt=pt->right;
		dist=parents->degree;
		while(A[dist]!=NULL)
		{
			y=A[dist];
			if(parents->n > y->n)
			  {
			  nptr=parents;
			  parents=y;
			  y=nptr;
			  
			  }
			  if(y==h1)
			  {
			  	h1=x;
			  	Fibnocci_link(h1,y,parents);
			  	if(parents->right==parents)
			  	{
			  		h1=parents;
			  	    A[dist]=NULL;
			  	    dist++;
				  }
				A[dist]=parents;
				parents++;
			  }
			  while(parents!=h1)
			  {
			  	H=NULL;
			  	for(int j=0;j<D;j++)
			  	{
			  		if(A[j]!=NULL)
			  		{
			  		  A[j]->left=A[j];
			  		  A[j]->right=A[j];
			  		  if(H!=NULL)
			  		  {
			  		  H->left->right=A[j];
			  		  A[j]->right=H;
			  		  A[j]->left=H->left;
			  		  H->left=A[j];
			  		  
							
					}
					  
					  	
					}
				  }
			  }
		}
	}
}
Node * DecreaseKey(Node * h1,int parents,int k)
{
	Node * y;
	if(h1==NULL)
	{
		cout<<"The Heap is Empty"<<endl;
		return 0;
		
	}
	Node * ptr=find(h1,parents);
	if(ptr==NULL)
	{
		cout<<"Not found"<<endl;
		return 1;
		
	}
	if(ptr->n < k)
	{
		cout<<"Enter the key"<<endl;
		return 0;
		
	}
	ptr->n=k;
	y=ptr->parent;
	if(y!=NULL && ptr->n < y->n)
	{
		Cut(h1,ptr,y);
		Casecase_cut(h1,y);
		
	}
	if(ptr->n < H->n)
	  H=ptr ;
  return 0;
  
}
Node * Cut(Node * h1,Node * parents,Node * y)
{
	if(parents=parents->right)
	   y->child=NULL;
	parents->left->right=parents->right;
	parents->right->left=parents->left;
	if(parents==y->child)
       y->child=parents->right;
    y->degree=y->degree--;
    parents->right=parents;
    parents->left=parents;
    h1->left->right=parents;
    parents->right=h1->left;
    h1->left=parents;
    parents->parent=NULL;
    parents->mark=false;
}
Node * Casecadecut(Node * h1,Node * y)
{
	Node *z=y->parent;
	if(z!=NULL)
	{
		if(y->mark==false)
		{
			y->mark=true;
		}
		else{
			Cut(h1,y,z);
			Casecadecut(h1,z);
		}
	}
}
Node * find(Node * h1,int k)
{
	Node * parents=h1;
	parents->c='Y';
	Node * p=NULL;
	if(parents->n==k)
	{
		p =parents;
		parents->c='N';
		return p;
	}
	if(p==NULL)
	{
		if(parents->child!=NULL)
		  p =find(parents->child,k;
	}
	if(parents->right->c!='Y')
	   p=find(parents->right,k);
    parents->c='N';
    return p;
}
Node * deleteKey(Node * h1,int k)
{
	Node * nptr=NULL;
	int t;
	t=Decrease_key(h1,k,-5000);
	if(!t)
	 nptr=Extract_Min(H);
	if(np!=NULL)
	  cout<<"key deleted"<<endl;
	else
	  cout<<"key not deleted"<<endl;
   return 0;
    
}
int main(){
	int n,m,l;
	FinbonacciHeap fn;
	Node * p;
	Node * h;
	h=fn.Heap();
	p=fn.createNode(10);
	h=fn.insert(h,p);
	p=fn.createNode(23);
	h=fn.insert(h,p);
	p=fn.createNode(2);
	h=fn.insert(h,p);
	p=createNode(3);
	h=fn.insert(h,p);
	p=createNode(44);
	h=fn.insert(h,p);
	p=createNode(0);
	h=fn.insert(h,p);
	fn.display(h);
	
	p=fn.ExtractMin(h);
	if(p!=NULL)
	   cout<<"MIN Heap presernt"<<endl;
	else
	  cout<<"Heap is empty"<<endl;
	
	m=0;
	l=12;
	fn.DecreaseKey(h,m,l);
	m=12;
	fn.deleteKey(h,m);
  return 0;
  
}
