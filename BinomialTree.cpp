#include<iostream>
using namespace std;

struct Node{
	int data,degree;
	Node * child;
	Node * parent;
	Node * sibling;
};

Node * newNode(int key){
	Node * temp=new Node;
	temp->data=key;
	temp->degree=0;
	temp->child=NULL;
	temp->parent=NULL;
	temp->sibling=NULL;
	return temp;
}

Node * mergeBinomialTree(Node * b1,Node * b2){
	
	if(b1->data > b2->data)
	   swap(b1,b2);
	
	b2->parent=b1;
	b2->sibling=b1->child;
	b1->child=b2;
	b1->degree++;
	return b1;
}

list<Node*> unionBinomialHeap(  list<Node*>l1,list<Node*>l2){
	list<Node*> new_;
	list<Node*>::iterator it=l1.begin();
	list<Node*>::iterator ot=l2.begin();
	while(it!=l1.end() && ot!=l2.end())
	  {
	  	  if((*it)->degree <= (ot*)->degree)
	  	     {
	  	     	new_.push_back(*it);
	  	     	it++;
			}
			else{
				new_.push_back(*ot);
				ot++;
			}
	  }
	  
	  while(it!=l1.end()){
	  	new_.push_back(*it);
	  	ot++;
	  }
	  return new_;
}
list<Node*>adjust(list<Node*> heap)
{
	 if(heap.size()<=1)
	    return heap;
	list<Node*>new_heap;
	list<Node*>::iterator it1,it2,it3;
	it1=it2=it3=heap.begin();
	 if(heap.size())
	 {
	 	it2=it1;
	 	it2++;
	 	it3=heap.end();
	 	
	 }
	 else{
	 	it2++;
	 	it3=it2;
	 	it3++;
	 }
	 
	 while(it1!=heap.end())
	 {
	 	if(it2==heap.end())
	 	   it1++;
	 	else if((*it1)->degree < (*it2)->degree)
	 	{
	 		it1++;
	 		it2++;
	 		if(it3!=heap.end())
	 		   it3++;
		 }
		 
		 else if(
		 it3!=heap.end() &&
		(*it1)->degree==(*it2)->degree &&
		(*it1)->degree==(*it3)->degree
		 ){
		 	it1++;
		 	it2++;
		 	it3++;
		 }
		 else if( (*it)->degree == (*it2)->degree ){
		 	Node * temp;
		 	*it1=mergeBinomialTree(*it1,*it2);
            it2=heap.erase(it2);
			 if(it3 !=heap.end())
			    it3++;
		 }
		 
		  
	 }
	return heap;
	 
}

list<Node*>insertATreeHeap(list<Node*> heap,Node * tree )
{
	list<Node*>temp;
	temp.push_back(tree);
	temp=unionBinomialHeap(heap,temp);
	return adjust(temp);
}

list<Node*>removeMinFromTreeReturnBHeap(Node*tree)
{
	list<Node*>heap;
	Node * temp=tree->child;
	Node * lo;
	
}

list<Node*>insert(list<Node*>head,int key)
{
	Node * temp=newNode(key);
	return insertATreeInHeap(head,temp);
}

Node * getMin(list<Node*>heap){
	  list<Node*>newHeap,lo;
	  Node * temp;
	  
	  temp=getMin(heap);
	  list<Node*>::iterator it;
	  it=heap.begin();
	   while(it!=heap.end())
	   {
	   	  if(*it!=temp)
	   	    {
				newHeap.push_back(*it);
	   	    }
	   	    it++;
	   }
	   
	   lo=removeMinFromTreeReturnBHeap(temp);
	   newHeap=unionBinomialHeap(newHeap,lo);
	   newHeap=adjust(newHeap);
	   return newHeap;
}

void printTree(Node * h){
	
	while(h){
		cout<<h->data<<" ";
		printTree(h->child);
		h=h->sibling;
	}
}

void printHeap(list<Node*>heap)
{
	list<Node*>::iterator it;
	it=heap.begin();
	while(it!=heap.end())
	{
		printTree(*it);
		it++;
	}
}
int main(){
	int c,key;
	list<Node*>root;
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,4);
	root=insert(root,30);
	
	printHeap(root);
	Node * temp=getMin(root);
	cout<<"MIN->element of Heap"
	    <<temp->data<<"\n";
    root=extractMin(heap);
    print(root);
 return 0;
    
}
