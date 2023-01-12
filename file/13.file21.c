
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *fp;
char ch;
fp=fopen("demo_copy.txt","r");
if(fp==NULL){
   printf("no file");
   exit(1);
}

while(!feof(fp)) //feof return nonzero if fp is on EOF wotherwise zero
   {
ch=fgetc(fp);
printf("%c",ch);
   }

//optional
   // while(1)
   // {
   // if(ch==EOF){
   //    break;
   //    }
   // else{
   // ch=fgetc(fp);
   // printf("%c",ch);
   // }
   // }
   fclose(fp);
   return 0;
}