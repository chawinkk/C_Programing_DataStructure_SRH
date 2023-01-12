
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *fp;
char str[20];
fp=fopen("line5.txt","w");
if(fp==NULL){
   printf("no file");
   exit(1);
}
for(int i;i<=5;i++){
   printf("\n Enter %d line",i);
   gets(str);
   fputs(str,fp);
   fputs("\n",fp);
   //fprintf(fp,"\n"); optioanl 
}
fclose(fp);
   return 0;
}