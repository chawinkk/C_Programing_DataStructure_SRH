
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char ch;
FILE *fp1, *fp2;
fp1=fopen("demo.txt","r");
fp2=fopen("demo_copy.txt","w");
if(fp1==NULL || fp2==NULL){
   printf("File cannot open");
   exit(1);
}
while(1){
   ch=fgetc(fp1);
   if(ch==EOF){
      break;
   }
   else{
      fputc(ch,fp2);
      }

}
fclose(fp1);
fclose(fp2);
   return 0;
}