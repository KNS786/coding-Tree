#include<stdio.h>


char check(char name[20],int start,int end){
   int inr=0;
  
   for(int i=0;i<end;i++){
	   if(name[i]=='B') B++;
	   else if(name[i]=='u') u++;
       else if(name[i]=='l') l++;
       else if(name[i]=='b') b++;
       else if(name[i]=='a') a++;
       else if(name[i]=='s') s++;
       else if(name[i]=='r') r++;

       if(B==1 && r==1)
		   if( u >=1 && l>=1 && b>=1 && a>=1 && s>=1 )  inr++;  
	    
 
   }
  return inr;   
}

int main(){
	
	char name[20];
	fgets(name,sizeof(name),stdin);
	int n=sizeof(name)/sizeof(name[0]);
	
	check(name,0,n);
	
}