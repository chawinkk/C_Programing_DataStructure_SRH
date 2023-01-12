
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char ch;
FILE *fp1;
fp1=fopen("13.file17.c","r");
if(fp1==NULL){
   printf("File cannot open");
   exit(1);
}
while(1){
   ch=fgetc(fp1);
   if(ch==EOF){
      break;
   }
   else            
   {printf("%c",ch);}
}
fclose(fp1);
   return 0;
}