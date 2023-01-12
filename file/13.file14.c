
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char ch;
   int  w=0;
FILE *fp;
fp=fopen("demo.txt","r");
if(fp==NULL){
   printf("File cannot open");
   exit(1);
}
while(1){
   ch=fgetc(fp);
   if(ch==EOF){
      break;
   }
   if(ch=='2'){
      w++;
   }
}
fclose(fp);

printf("Counted charactor %d", w);
   return 0;
}