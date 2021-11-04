#include<bits/stdc++.h>
using namespace std;

int grid_size=0;

void FindPrinces(char grid[grid_size][grid_size]){
    int prince_cell_x=0,prince_cell_y=0;
    int bot_cell_x=0,bot_cell_y=0;
    for(int i=0;i<grid_size;i++){
        for(int j=0;j<grid_size;j++){
            if(grid[i][j]=='p'){
                prince_cell_x=i;
                prince_cell_y=j;
            }
            else if(grid[i][j]=='m'){
                bot_cell_x=i;
                bot_cell_y=j;
            }
        }
        
    }
    int movestep;
    if(bot_cell_x == prince_cell_x){
        
        
       if(bot_cell_y > prince_cell_y){
            movestep=bot_cell_y - prince_cell_y;
           for(int i=0;i<movestep;i++){
                cout<<"Left"<<'\n';
            }
       }else{
           movestep=prince_cell_y-bot_cell_y;
           for(int i=0;i<movestep;i++)
              cout<<"Right"<<'\n';
           
       }
    }
    if(bot_cell_y==prince_cell_y){
        if(bot_cell_x > prince_cell_x){
            movestep=bot_cell_x-prince_cell_x;
            for(int i=0;i<movestep;i++){
              cout<<"Top"<<"\n";    
            }
            
        }else{
            movestep=prince_cell_x - bot_cell_x;
            for(int i=0;i<movestep;i++) 
              cout<<"Down"<<'\n';
            
        }
    }
    
    
    
}




int main(){
  scanf("%d",&grid_size);
  char * grid[grid_size];
  *grid=(char*)malloc(grid_size*sizeof(char));
  for(int i=0;i<grid_size;i++)
    grid[i]=(char*)malloc(grid_size* sizeof(char));
  
  char read_nxt;
  scanf("%c\n",&read_nxt);
  
  for(int i=0;i<grid_size;i++){
      for(int j=0;j<grid_size;j++){
          scanf("%c",&grid[i][j]);
      }
      scanf("%c",&read_nxt);
  }
  
  for(int i=0;i<grid_size;i++){
       for(int j=0;j<grid_size;j++){
           printf("%c ",grid[i][j]);
           
       }
       printf("\n");
      
  }
  
   
   return 0;
   
}
