
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

FILE *fp;
int n;
char ch;
fp=fopen("demo.txt","r");
if(fp==NULL){
   printf("No file");
   exit(1);
}

else{
   n=ftell(fp);
   printf("\n Position of file pointer %d",n);
   fseek(fp,6,SEEK_SET);
   n=ftell(fp);
   printf("\n Position of file pointer %d",n);
   fseek(fp,5,SEEK_CUR);
   n=ftell(fp);
   printf("\n Position of file pointer %d",n);
}
fclose(fp);

   return 0;
}