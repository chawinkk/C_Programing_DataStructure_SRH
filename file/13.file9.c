
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i;
   FILE *fp;
   fp=fopen("table.txt","r");
   if(fp==NULL){
    printf("no file");
    exit(1);
   }
   for(i=1;i<=12;i++){
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
   }
   fclose(fp);
   return 0;
}