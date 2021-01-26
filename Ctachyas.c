#include<stdio.h>

int Min(int a,int b){
	return a<b ?a :b;
	
}

int check(int min,int B,int u,int b,int l,int a,int s,int r){
	return  min ==B && min==u && min==b && min==l && min ==a && min==s && min==r;
}

int main(){
	char name[20];
	fgets(name,sizeof(name),stdin);
    puts(name);
	
	int n=sizeof(name)/sizeof(name[0]);

     int B=0,u=0,b=0,l=0,a=0,s=0,r=0;

	for(int i=0;i<n;i++){
		if(name[i]=='B') B++;
		if(name[i]=='u') u++ ;
		if(name[i]=='b') b++;
		if(name[i]=='l') l++;
		if(name[i]=='a') a++;
		if(name[i]=='s') s++;
		if(name[i]=='r') r++;
	}
	  
	if(B!=0 && u!=0 && b!=0 && l!=0 && a!=0 && s!=0 && r!=0){
		  
		if(B >=1){
			
			if(u==B && b==B && l==B && a==B && s==B && r==B )  printf("%d",B);
			else{
				int f1=Min(Min(u,B),Min(b,l)) ;
				int f2=Min(Min(a,s),Min(s,r));
				
				int k=Min(f1,f2);
				check(k,B,u,b,l,a,s,r)? printf("%d",k) : 0;
                        						
				
			}
			
		}
		
	}else{
		printf("%d",B);
		
	}

    return 0;
	
	  
}