#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long 

 
int INF=(1<<29);

int  main(){
   int N,M;
 scanf("%d%d",&N,&M);
    int ** arr=( int**)malloc(N*sizeof( int*));    
    
    for( int i=0;i<M;i++)
       *(arr+i)=( int*)malloc(N*sizeof( int));
    
    for( int i=0;i<M;i++)
       for( int j=0;j<N;j++)
         *(*(arr+i)+j)=0;
   
    
     int a,b,k;
     int max_=-INF;
    for( int i=0;i<M;i++){
        scanf("%d%d%d",&a,&b,&k);
        a=a-1;
        b=b-1;
         
         for(int s=i;s<M;s++)
           for(int y=a;y<=b;y++){
              *(*(arr+s)+y)+=k;
                if(*(*(arr+s)+y) > max_)
                  max_=*(*(arr+s)+y);
           }
        
    }
    
     printf("%d",max_);
    
    free(*arr);
    
    return 0;
    
}
