#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<direct.h>
struct student{
	char id[11];
	char pass[15];
	char name[20];
	char clas[5];
	char branch[5];
	char mobile[12];
	char add[30];
	char parent[20];
};
struct student stu;

COORD coord = {0,0};
	void gotoxy(int x,int y){
		coord.X =x;  coord.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}
	
	void line(){
		int i;
		for(i=0;i<80;i++){
			printf("-");
		}
	}
		void line1(){
		int i;
		for(i=0;i<63;i++){
			printf("-");
		}
	}
	void line2(){
		int i;
		for(i=0;i<85;i++){
			printf("-");
		}
	}



  void marks(){
  	while(1){
	  system("CLS");
  	int i,n , x;
  	 char *m1[5];
	    char *m2[5];
	     char *m3[6];
  	long long int j;
  	 gotoxy(42,0);
	  printf("ADD MARKS");
	   gotoxy(0,4);
	 
	   printf("\t1.\tCALULUS\n\n\t2.\tELECTRICAL\n\n\t3.\tC_PROGRAMMING\n\n\t4.\tLANGUAGE AND WRITING SKILLS\n\n\t5.\tEVIORNMENT SCIENCE\n\n\t6.\tFINDAMENTAL OF COMPUTER SCIENCE\n\n\t7.\t EXIT.\n\n\n\t\tENETR SERIAL NO. TO SELECT : ");
	   scanf("%d",&x);
	   if(x==7){
	   
	   break;}
	   gotoxy(20,22); printf("ENETR  NO. OF STUDENT : ");
	   scanf("%d",&n);
	   gotoxy(20,24); printf("ENTER MIS NO. OF FIRST STUDENT:");
	   scanf("%lld",&j);
	   FILE  *fp;
	   if(x==1)
	   fp = fopen("sub1.txt","a");
	    else if(x==2)
	   fp = fopen("sub2.txt","a");
	    else if(x==3)
	   fp = fopen("sub3.txt","a");
	    else if(x==4)
	   fp = fopen("sub4.txt","a");
	    else if(x==5)
	   fp = fopen("sub5.txt","a");
	    else if(x==6)
	   fp = fopen("sub6.txt","a");
	   else{
	   	printf("unavailable!\n");
	   }
	    gotoxy(10,26); 	printf("S.N.\t MIS Numbers"); gotoxy(35,26); 	printf("T1\t\tT2\t\tEND SEM. ");
	    gotoxy(10,27); line1();
	   for(i=0;i<n;i++)
	   {
	   gotoxy(10,(2*i)+28); 	printf("%d\t %lld\t",i+1,j);
	    gotoxy(10,(2*i)+29); line1();
	   	fflush(stdin);
	 gotoxy(35,(2*i)+28);  scanf("%s",&m1);
	 fflush(stdin);
	 gotoxy(48,(2*i)+28);  scanf("%s",&m2);
	 fflush(stdin);
	 gotoxy(66,(2*i)+28);  scanf("%s",&m3);
	fprintf(fp,"%lld\t%s\t%s\t%s\n",j,m1,m2,m3);
	j++;
	   }
	   fclose(fp);
	 gotoxy(80,(2*i)+32);  printf("MARKS ADDED SUCCESFULLY.");  
	  gotoxy(5,(2*i)+35);  printf("PRESS ANY KEY TO BACK");
	  char o;
	  fflush(stdin); scanf("%c",&o);  
  }
  
}





void data(){
	int p=0,i=0;
	char sid[11];
	char spass[15];	
	system("CLS");
	gotoxy(40,0);
	printf("STUDENTS COMPLETE RECORD:\n");
	FILE *fp;
	fp = fopen("record.txt","rb");	

 gotoxy(6,4);printf("MIS  ");   
gotoxy(19,4);printf("NAME" );
gotoxy(40,4);printf("YEAR " );
gotoxy(48,4);printf("BRANCH");
gotoxy(58,4);printf("MOBILE");

gotoxy(74,4);printf("Parent's Name:");
gotoxy(5,5); line2();
 while(fread(&stu,sizeof(stu),1,fp)==1){
 	gotoxy(5,(2*i)+7); line2();
 	gotoxy(6,(2*i)+6);printf("%s",stu.id);
 	gotoxy(19,(2*i)+6);printf("%s",stu.name);
 	gotoxy(40,(2*i)+6);printf("%s",stu.clas);
 		gotoxy(48,(2*i)+6);printf("%s",stu.branch);
 		gotoxy(58,(2*i)+6);printf("%s",stu.mobile);
 		
 		gotoxy(74,(2*i)+6);printf("%s",stu.parent);
 		i++;
 }


    fclose(fp);
char g;
gotoxy(5,22);
		printf("PRESS ANY KEY TO BACK.");
	fflush(stdin);	scanf("%c",&g);
			
}	
	
	
	
void admin(){
	int a=0;
	while(1){
		system("CLS");
	long long int i,j=27112001;
	int n;
	gotoxy(40,2);
	printf("ADMIN CONTROL PAGE");
	gotoxy(39,3);
	printf("--------------------");
	gotoxy(22,6);
	if(a==0){
	printf("ENTER ADMIN PASSWORD:\t\t");
	scanf("%lld",&i);}
	if(i==j|| a!=0){
		a++;
		gotoxy(15,9);
		printf("1.\tCOMPLETE STUDENT DATA.");
		gotoxy(15,11);
		printf("2.\tADD MARKS FOR RESULT.");
			gotoxy(15,13);
		printf("3.\tEXIT.");
		gotoxy(20,18);
		printf("CHOOSE OPTION :\t\t");
		scanf("%d",&n);
		if(n==1)
		data();
		if(n==2)
		marks();
		if(n==3)
		break;
	}
	else{
	gotoxy(56,9);
	printf("WRONG PASSWORD!");
}
}
}


	
	
	
int result(){
	 	while(1){
	  	system("CLS");
  	/*int i,n , x,marks;
  	long long int j;
	  printf("choose subject for input\n");
	   printf("1.\tCALULUS\n2.\tELECTRICAL\n3.\tC_PROGRAMMING\n4.\tLANGUAGE AND WRITING SKILLS\n5.\tEVIORNMENT SCIENCE\n6.\tFINDAMENTAL OF COMPUTER SCIENCE\n7.\t EXIT.\n\nenter subject no:");
	   scanf("%d",&x);
	   if(x==7){
	   
	   exit(1);}
	   printf("Enter no. of students:");
	   scanf("%d",&n);*/
	   int j,x=0,i,a;
	   char *m1[3];
	    char *m2[3];
	     char *m3[4];
	    gotoxy(42,0); printf("RESULT PAGE\n");
	  gotoxy(25,3); printf("ENTER MIS NUMBER:");
	   scanf("%lld",&j);
	   	gotoxy(60,5);
	   	printf("T1\t\tT2\t\tEND SEM");
	   while(1){
	   	int n=200;
	   x++;
	   FILE  *fp;
	   gotoxy(15,7);
	   	 	line();
	   gotoxy(15,(2*x)+6);
	   if(x==1){
	   printf("1.\tCALCULUS\t");
	   fp = fopen("sub1.txt","r");}
	    else if(x==2)
		{fp = fopen("sub2.txt","r"); printf("2.\tELECTRICAL\t");}
	    else if(x==3)
	  { fp = fopen("sub3.txt","r"); printf("3.\tC_PROGRAMMING\t");}
	    else if(x==4)
	{   fp = fopen("sub4.txt","r"); printf("4.\tLANGUAGE AND WRITING SKILLS\t");}
	    else if(x==5)
	  { fp = fopen("sub5.txt","r"); printf("5.\tEVIORNMENT SCIENCE\t");}
	    else if(x==6)
{	   fp = fopen("sub6.txt","r"); printf("6.\tFINDAMENTAL OF COMPUTER SCIENCE\t\t");}
	   
	   while(n--)
	   {
	   	gotoxy(60,(2*x)+6);
	   	fscanf(fp,"%d%s%s%s",&a,&m1,&m2,&m3);
	   	if(j==a){
	   		printf("%s\t\t%s\t\t%s",m1,m2,m3);
	   		break;
		   }
		   
	   	 }
	   	 	gotoxy(15,(2*x)+7);
	   	 	line();
	   fclose(fp);
	   if(x==6)
	   break;
}
int g;
printf("\n\n\n\n\t\t\t 0 TO EXIT and 1 TO CHECK ANOTHER RESULT");
fflush(stdin);
scanf("%d",&g);
if(g==0)
break;
}


  
  return 0;
}








void add(){
	  int p=0;	
system("CLS");
gotoxy(40,0);
	printf("ADD STUDENT RECORD:\n");
	FILE *fp;
	fp = fopen("record.txt","ab");
gotoxy(15,4);	printf("MIS:  ");
gotoxy(40,4);	scanf("%s",stu.id);fflush(stdin);
gotoxy(15,6);	printf("PASSWORD:  ");gotoxy(40,6);	  
    do{ 
        stu.pass[p]=getch(); 
        if(stu.pass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(stu.pass[p-1]!='\r'); 
   stu.pass[p-1]='\0'; 
   
   
gotoxy(15,8);	printf("NAME:  ");gotoxy(40,8);gets(stu.name);fflush(stdin);
gotoxy(15,10);	printf("YEAR:  ");gotoxy(40,10);gets(stu.clas);fflush(stdin);
gotoxy(15,12);	printf("BRANCH:  ");gotoxy(40,12);gets(stu.branch);fflush(stdin);
gotoxy(15,14);	printf("MOBILE NUMBER:  ");gotoxy(40,14);gets(stu.mobile);fflush(stdin);
gotoxy(15,16);	printf("ADDRESS:  ");gotoxy(40,16);gets(stu.add);fflush(stdin);
gotoxy(15,18);	printf("Parent's Name:  ");gotoxy(40,18);gets(stu.parent);fflush(stdin);
	fwrite(&stu,sizeof(stu),1,fp);
	gotoxy(60,20);
		printf("RECORD ADDED SUCESSFULLY!");
	fclose(fp);
char g;
		gotoxy(5,22);
		printf("PRESS ANY KEY TO BACK.");
		scanf("%c",&g);
		
}




void modify(){
	  int i=0,p=0;
	  char spass[15];
	  char sid[15];
	
	system("CLS");
	printf("MODIFY STUDENT INFORMATION\n");
FILE *fp;
	fp = fopen("record.txt","rb+");	
gotoxy(15,4);	printf("MIS:  ");
gotoxy(40,4);fflush(stdin);	scanf("%s",sid);
    while(fread(&stu,sizeof(stu),1,fp)==1){
    	if(strcmp(sid,stu.id)==0){
    	  i=1;
		  break;
		  }
		    }
    if(i==1){	
	
gotoxy(15,6);	printf("ENTER PASSWORD:  ");	 gotoxy(40,6); 
    do{ 
        spass[p]=getch(); fflush(stdin);
        if(spass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(spass[p-1]!='\r'); 
   spass[p-1]='\0';
   
   if(strcmp(spass,stu.pass)==0){ 
   fflush(stdin);  
	gotoxy(15,8);	printf("NAME:  ");gotoxy(40,8);gets(stu.name);fflush(stdin);
gotoxy(15,10);	printf("YEAR:  ");gotoxy(40,10);gets(stu.clas);fflush(stdin);
gotoxy(15,12);	printf("BRANCH:  ");gotoxy(40,12);gets(stu.branch);fflush(stdin);
gotoxy(15,14);	printf("MOBILE NUMBER:  ");gotoxy(40,14);gets(stu.mobile);fflush(stdin);
gotoxy(15,16);	printf("ADDRESS:  ");gotoxy(40,16);gets(stu.add);fflush(stdin);
gotoxy(15,18);	printf("Parent's Name:  ");gotoxy(40,18);gets(stu.parent);fflush(stdin);
	fseek(fp,-sizeof(stu), SEEK_CUR);
		fwrite(&stu,sizeof(stu),1,fp);
	}
		else{
	gotoxy(20,12);
	printf("INCORRECT PARRWORD!! ");}
}
else{
gotoxy(50,10);printf("RECORD NOT FOUND 0R WRONG INPUT ID!");}
    fclose(fp);
char g;
gotoxy(5,22);
		printf("PRESS ANY KEY TO BACK.");
	fflush(stdin);	scanf("%c",&g);
			
}









void search(){
	int p=0,i=0;
	char sid[11];
	char spass[15];	
	system("CLS");
	gotoxy(40,0);
	printf("SEARCH STUDENT RECORD:\n");
	FILE *fp;
	fp = fopen("record.txt","rb");	
gotoxy(15,4);printf("MIS:  "); fflush(stdin);
    gotoxy(40,4);scanf("%s",&sid);
    while(fread(&stu,sizeof(stu),1,fp)==1){
    	if(strcmp(sid,stu.id)==0){
    	  i=1;
		  break;
		  }
		    }
    if(i==1){	
	
gotoxy(15,6);	printf("ENTER PASSWORD:  ");gotoxy(40,6);	  
    do{ 
        spass[p]=getch(); fflush(stdin);
        if(spass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(spass[p-1]!='\r'); 
   spass[p-1]='\0';
   if(strcmp(spass,stu.pass)==0){   
gotoxy(15,8);printf("NAME:" );gotoxy(40,8);printf("%s",stu.name);
gotoxy(15,10);printf("YEAR: " );gotoxy(40,10);printf("%s",stu.clas);
gotoxy(15,12);printf("BRANCH:");	gotoxy(40,12);printf("%s",stu.branch);
gotoxy(15,14);printf("MOBILE NUMBER:");gotoxy(40,14);printf("%s",stu.mobile);
gotoxy(15,16);printf("ADDRESS:");gotoxy(40,16);printf("%s",stu.add);
gotoxy(15,18);printf("Parent's Name:");gotoxy(40,18);printf("%s",stu.parent);
	}
	else{
	gotoxy(20,12);
	printf("INCORRECT PARRWORD!! ");}
}
else{
gotoxy(50,10);printf("RECORD NOT FOUND 0R WRONG INPUT ID!");}
    fclose(fp);
char g;
gotoxy(5,22);
		printf("PRESS ANY KEY TO BACK.");
	fflush(stdin);	scanf("%c",&g);
			
}



void change(){
	  int i=0,p=0;
	  char spass[15];
	  char sid[15];
	
	system("CLS");
gotoxy(40,0);	printf("CHANGE PASSWORD");
	FILE *fp;
	fp = fopen("record.txt","rb+");	
gotoxy(15,5);	printf("MIS:  "); fflush(stdin);
    gotoxy(25,5);	scanf("%s",&sid);
    while(fread(&stu,sizeof(stu),1,fp)==1){
    	if(strcmp(sid,stu.id)==0){
    	  i=1;
		  break;
		  }
		    }
    if(i==1){	
	
gotoxy(15,8);	printf("ENTER OLD PASSWORD:  ");gotoxy(40,8);	  
    do{ 
        spass[p]=getch(); fflush(stdin);
        if(spass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(spass[p-1]!='\r'); 
   spass[p-1]='\0';
   
   if(strcmp(spass,stu.pass)==0){ 
   fflush(stdin);  

	gotoxy(15,12);	printf("ENTER NEW PASSWORD:  ");gotoxy(40,12);
		p=0;
	 do{ 
        stu.pass[p]=getch(); fflush(stdin);
        if(stu.pass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(stu.pass[p-1]!='\r'); 
   stu.pass[p-1]='\0';
	fseek(fp,-sizeof(stu), SEEK_CUR);
		fwrite(&stu,sizeof(stu),1,fp);

	}
   else{
	gotoxy(20,12);
	printf("INCORRECT PARRWORD!! ");}
}
else{
gotoxy(50,10);printf("RECORD NOT FOUND 0R WRONG INPUT ID!");}
    fclose(fp);
char g;
gotoxy(5,22);
		printf("PRESS ANY KEY TO BACK.");
	fflush(stdin);	scanf("%c",&g);
			
}






	void student(){
	while(1){
			system("CLS");
		int g;
	gotoxy(40,0);printf("STUDENT RECORD SYSTEM\n");
	gotoxy(15,5);printf("1.\tADD STUDENT PROFILE");
	gotoxy(15,7);printf("2.\tSEARCH STUDENT");
	gotoxy(15,9);printf("3.\tCHECK RESULT");
		gotoxy(15,11);printf("4.\tMODIFY STUDENT DETAILS");
	gotoxy(15,13);printf("5.\tCHANGE PASSWORD");
	gotoxy(15,15);printf("6.\t BACK");
	gotoxy(20,20);printf("CHOOSE OPTION:");
		fflush(stdin);
		scanf("%d",&g);
		if(g==1)
		add();
		if(g==2)
		 search();
		if(g==3)
		 result();
		if(g==4)
	    modify();
	   	if(g==5)
	   change();
	    if(g==6)
	    break;
		  if(g==99)
		  marks(); 
}

}


void help(){
	char a;
	system("CLS");
	printf("************STUDENT INPUT SYSTEM*************\n*MIS--->ENTER YOUR MIS NUMBER.\n*PASSWORD--->CREATE A PASSWORD TO PROTECT YOUR FILE(not more than 14 charaters).\n*NAME--->TYPE YOUR NAME(if your name have more than 18 charaters, type first 18 only).\n*YEAR--->ENTER YOUR YEAR IN ROMAN ONLY,I FOR FISRT YEAR  ,II FOR SECOND YEAR AND SO ON.\n*BRANCH--->ENTER YOUR BRANCH AS CSE OR ECE ONLY.\n*MOBILLE--->ENTER YOUR 10 DIGIT MOBILE NUMBER ONLY.\n*ADDRESS--->ENTER YOUR ADDRESS IN 25 CHARACTERS ONLY.\n*PARENT'S NAME--->ENTER YOUR PARENT NAME IN 18 CHARACTERS.\n*NOTE:DO NOT TYPE 'BACKSPACE' WHILE TYPING PASSWORD.\n\n*SEARCH STUDENT:\n*HERE YOU CAN CHECK YOUR DETAILS BY USING MIS NUMBER AND PASSWORD, IF AVLIABLE.\n\n*RESULT:\n*YOU CHECK YOUR RESULT ,IF AVLIABLE.\n\n*MODIFY STUDENT DETAILS:\n*YOU LOGIN BY MIS NUMBER AND YOUR PASSWORD,AND YOU NEED TO TYPE ALL THE DETAILS AGAIN TO MODIFY YOUR PROFILE,IF YOU SIGN UP BEFORE.\n\n*CHANGE PASSWORD:\n*YOU CAN CHANGE YOUR PASSWORD HERE, IF YOU SIGN UP BEFORE.\n\n\n*SELECT OPTIONS:\n*YOU NEED TO ENTER SERIAL NUMBER OF OPTION WHICH YOU WANT TO OPERATE.\n\n");
printf("\n\t\t\t\tPRESS ANY KEY TO EXIT");
scanf("%c",&a);
}



void LEVEL_1(){
int v=0;
	while(1){
			system("CLS");
   gotoxy(85,27);
	printf("\xb1--------CREATORS----------\xb1");
	gotoxy(85,28);
	printf("______________________________");
	gotoxy(85,29);
	printf("\xb1PRERIT KUMAR JHA 111915095\xb1");
	gotoxy(85,30);
	printf("\xb1GAURAV           111915035\xb1");
	int j;
gotoxy(20,5);
for(j=0;j<24;j++)
{
if(v==0) 
Sleep(10);
printf("\xb2");
}
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
int i;
for(i=0;i<27;i++)
{
printf("\xB2");
}
gotoxy(20,5);printf("\xB2");
if(v==0) 
Sleep(20);
for( i=5;i<=20;i++)
{
gotoxy(20,i);printf("\xb2");
}
gotoxy(80,5);printf("\xB2");
if(v==0) 
Sleep(20);
for (i = 5; i <=20; i++)
{
	gotoxy(80,i);printf("\xb2");
}
gotoxy(20,20);
for(j=0;j<60;j++)
{
if(v==0) 
Sleep(20);
printf("\xb2");
}

gotoxy(20,9);
for(j=0;j<60;j++)
{
if(v==0) 
Sleep(20);
printf("\xb2");
}

gotoxy(20,25);
printf("\t ");
gotoxy(29,7);printf("WELCOME TO DATABASE MANAGEMENT SYSTEM");
gotoxy(26,13);printf("1. STUDENTS PORTAL ");
gotoxy(26,16);printf("2. ADMIN ");
gotoxy(60,13);printf("3. HELP ");
gotoxy(60,16);printf("4. EXIT ");
gotoxy(20,25);
printf("CHOOSE THE OPERATION YOU WANT TO PERFORM  ");
int a;
scanf("%d",&a);
fflush(stdin);
if(a==1)
student();
if (a==2)
admin();
if(a==3)
help();
if(a==4)
{
	printf("ARE YOU SURE\nENTER:   1 for YES  AND 2 for NO\n");
	int b;
	scanf("%d",&b);
	fflush(stdin);
	if(b==1){
		system("CLS");
		exit(0);
	}
	else{
		system("CLS");
	    LEVEL_1();}
	    
}
v++;
}

}


	

int main(){
system("color b4");
	system("title SDBMS");
LEVEL_1();
}
