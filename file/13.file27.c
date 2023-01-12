
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

FILE *fp1, *fp2, *fp3;
char ch;
fp1=fopen("merge1.txt","r");
fp2=fopen("merge2.txt","r");
fp3=fopen("merge_12.txt","w");
if(fp1==NULL || fp2==NULL || fp3==NULL){
   printf("no file");
   exit(1);
}
while(1){
   ch=fgetc(fp1);
   if(ch==EOF){
      break;
   }
   else{
      fputc(ch,fp3);
   }
}
fputs("\n",fp3);
fclose(fp1);

while(1){
   ch=fgetc(fp2);
   if(ch==EOF){
      break;
   }
   else{
      fputc(ch,fp3);
   }
}
fclose(fp2);
fclose(fp3);
   return 0;
}