
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *fp;
char str[50];
fp=fopen("line.txt","r");
if(fp==NULL){
   printf("no file");
   exit(1);
}
fgets(str,50,fp);
printf("\nFile Contains = %s",str);
   fclose(fp);
   return 0;
}