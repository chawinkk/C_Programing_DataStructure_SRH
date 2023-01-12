
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char str[10];
   int i;
FILE *fp;
fp=fopen("data1.txt","w");
if(fp==NULL){
   printf("File cannot open");
   exit(1);
}
printf("\nEnter your name");
scanf("%s",str);
for(i=0;str[i]!='\0';i++){
   fputc(str[i],fp);
}
fclose(fp);
   return 0;
}