
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
int no;
char name[20];
};

int main(){
struct student B2;
FILE *fp;
int i;
fp=fopen("structstudnet.txt","wb");
if(fp==NULL){
   printf("No file");
   exit(1);
}
else{
   printf("\nEnter student no: ");
   scanf("%d",&B2.no);
   fflush(stdin);

   printf("\nEnter student name: ");
   gets(B2.name);
   fflush(stdin);

   }
   fwrite(&B2,sizeof(struct student),1,fp);
printf("\nsuccess");
fclose(fp);
/////open again
fp=fopen("structstudnet.txt","rb");
if(fp==NULL){
   printf("No file");
   exit(1);
}
else{
   fread(&B2,sizeof(struct student),1,fp);
   printf("\n\nstudnet list");
   printf("\nstundet no %d the name is %s",B2.no,B2.name);
}
fclose(fp);

   return 0;
}