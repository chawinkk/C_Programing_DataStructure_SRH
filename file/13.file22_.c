
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *fp;
char str[50];
fp=fopen("line.txt","w");
if(fp==NULL){
   printf("no file");
   exit(1);
}

printf("\nEnter a line of text");
gets(str);
fputs(str,fp);
   fclose(fp);
   return 0;
}