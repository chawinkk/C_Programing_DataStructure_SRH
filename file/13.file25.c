
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *fp;
int n1,n2;
fp=fopen("Number1.txt","w");
if(fp==NULL){
   printf("no file");
   exit(1);
}
printf("\nEnter number");
scanf("%d",&n1);
putw(n1,fp); //write an integaert in to file
fclose(fp);

fp=fopen("Number1.txt","r");
if(fp==NULL){
   printf("no file");
   exit(1);
}
else{
   n2=getw(fp);
   printf("\n%d",n2);
}
fclose(fp);
   return 0;
}