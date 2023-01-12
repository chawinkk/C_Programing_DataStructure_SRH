
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

FILE *fp;
char ch;
fp=fopen("demo.txt","r");
if(fp==NULL){
   printf("No file");
   exit(1);
}

else{
   fseek(fp,6,SEEK_SET);
   while(!feof(fp)){
      ch=fgetc(fp);
      printf("%c",ch);
   }
}
fclose(fp);

   return 0;
}