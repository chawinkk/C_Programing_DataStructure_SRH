
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char ch;
   int count=0, w=0;
FILE *fp;
fp=fopen("fac.txt","r");
if(fp==NULL){
   printf("File cannot open");
   exit(1);
}
while(1){
   ch=fgetc(fp);
   if(ch==EOF){
      break;
   }
   else{
      count++;
      }

   if(ch==' '){
      w++;
   }
}
fclose(fp);

printf("Counted charactor %d %d",count, w);
   return 0;
}