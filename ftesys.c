#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>

/* creating system arch for movie database for product developing */
/*create user signIn and signUp */

struct SignUp{
	char * name[20];
	char * email[20];  //primary key
	char * password[10];
	char * confirmPassword[10];
};

struct SignIn{
    char * email[20];
    char * password[10];
    	
};

struct videos{
	char * title[10];
	char * description[100];
	char * UrlLink[100]; //required;
	int  releaseDate;
};

struct myProfile{
	char * mymovie;
	char * movietitle;
};

///---------------create Database -------------------------------///
struct Database{
	struct SignIn * user;
	struct videos * vid;
	struct Database ** db_user,**db_videos;
	*user=(char*)malloc((1024*1024)*sizeof(char));
	*vid=(char*)malloc((1024*1024)*sizeof(char));
	**db_user=user;
	**db_videos=vid;
	
};

bool VALIDATE_EMAIL(char * email){
	int i;
	for(i=0;email[i]!='\n';i++) ;int cot=0,pot=0;
	if(i > 20 || i<10) return false;
	for(int k=0;k<i;k++){
		if(email[i]=='@') cot++;if( email[i]=='.' )pot++; 
	}
	if(cot==0 && pot==0) return false;
   
}
bool VALIDATE_PASSWORD(char * password){
	int i,per=0,dot=0,dill=0,g=0,gh=0,ae=0,op=0,cl=0,star=0,ar=0,at=0,hash=0,doll=0;
    for(i=0;password[i]!='\n';i++) ;
    for(int k=0;k<i;k++){
		if(password[k]=='.') dot++;
		if(password[k]=='~') dill++;
		if(password[k]=='!') ar++;
		if(password[k]=='@') at++;
		if(password[k]=='#') hash++;
		if(password[k]=='$') doll++;
		if(password[k]=='%') per++;
		if(password[k]=='^') g++;
		if(password[k]=='&') ae++;
		if(password[k]=='*') star++;
		if(password[k]=='(') op++;
		if(password[k]==')') cl++;
		if(password[k]=='-') gh++;
	}
return dot||dill||ar||at||hash||doll||per||g||ae||star||op||cl||gh;	
	
}

bool POST_SIGNIN(char * email,char * password){
	//fetch the database and check the files
	if(VALIDATE_EMAIL(email) && VALIDATE_PASSWORD(password)){
		struct Database ** db;
		if( (*db->user->email==email) && (*db->user->password==password) ){
			  printf("\nsucessfully signin");
			  return true;
		}
		return false ;
		  
	}
}
bool POST_SIGNUP(char * email,char * password){
	if(VALIDATE_EMAIL(email) && VALIDATE_PASSWORD(password)){
		struct Database ** db;
		if( (*db->user->email==email) && (*db->user->password==password) ){
			  printf("\nsucessfully signin");
			  return true;
		}
		return false ;
		  
	}
}

//create video
videos * create(Database * user,videos * v1){
	*v1=(struct videos*)malloc(1024*malloc(sizeof(videos)));
	printf("\n Enter movie title :");
	fgets(*user->v1->title,19,stdin);
	printf("\n Enter movie description : ");
	fgets(*user->v1->description,19,stdin);
	printf("\n enter movie url: ");
	fgets(*user->v1->UrlLink,19,stdin);
	return *user->v1;
}


void SignIn_and_signUp(){
	struct SignIn * in;
	struct SignUp * up;
	printf("_____________________WELCOME MYMOVIE MANAGEMENT_________________");"\n";
	printf("\nCHOOSE OPTION YOUR ENTER THE APP");"\0";
	printf("\n 1.SignIn ");"\0";
	printf("\n 2.SignUp ");"\0";
	int read;"\0";
	scanf("%d",&read);"\0";
	if(read!=1 || read!=2)
		 printf("Please enter correct option");
	else if(read==1){
         //SignIN();
          printf("email: ");
          fgets(in->email,19,stdin);
		  printf("\n Password: ");
		  fgets(in->password,9,stdin);
		  
		  //email && password true data base ROW return sucess
		  if(POST_SIGNIN(in->email,in->password))
			    printf("Your sucessfull logged in");
		  else {
			  
			  VALIDATE_EMAIL(in->email);
			  VALIDATE_PASSWORD(in->password);}
	}
	else if(read==2){
		//SIGNUP()
		printf("Name : \n");
		fgets(up->name,19,stdin);
		printf("email:\n");
		fgets(up->email,19,stdin);
		printf("password:\n");
		fgets(up->password,9,stdin);
		printf("\n confirmPassword : ");
		fgets(up->confirmPassword,9,stdin);
	
	    int nam,pass;
		for(nam=0;name[nam]!='\n';nam++) ;
		for(pass=0;password[pass]!='\n';pass++) ;
		for(cnfpass=0;confirmPassword[cnfpass];cnfpass++) ;
		
		if(nam==0 || nam <= 5){
	      printf("plase enter name in must  above 5 charcters")	;
		  return;
		}
		if(password==confirmPassword && VALIDATE_EMAIL(email)&& pass==cnfpass && VALIDATE_PASSWORD(password) && VALIDATE_PASSWORD(confirmPassword) && cnfpass <5 ){
			struct Database ** signUp;
			if ((*signUp->name==name) && *(signUp->password==password) && *(signUp->email==email)){
				*signUp->name=name;
				*signUp->email=email;
				*signUp->password=password;
				*signUp->confirmPassword=confirmPassword;
				
			}
				
		}
			
		
		
	}
	
}
int main(){
	struct Database **db;
	struct SignUp * sp;
	struct SignIn * sin;
	struct videos * vp;
	*dp->videos=&vp;
	*dp->SignUp=&sp;
	*dp->SignIn=&sin;
	return 0;
	
}