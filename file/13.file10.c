
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   FILE *fp;
   char ch;
   fp=fopen("demo.txt","r");
   if(fp==NULL){
    printf("no file");
    exit(1);
   }
   while(1)
   {
    ch=fgetc(fp);
    if(ch==EOF)// end of file
    break;
    printf("%c",ch);
   }
   fclose(fp);
   return 0;
}