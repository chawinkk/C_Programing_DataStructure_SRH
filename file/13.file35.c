
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

FILE *fp;
int n;
char ch;
fp=fopen("fac.txt","r");
if(fp==NULL){
   printf("No file");
   exit(1);
}

else{
   fseek(fp,0,SEEK_END); //pointer will be at the end of file
   n=ftell(fp);
   printf("\n Position of file pointer %d",n);
}
fclose(fp);

   return 0;
}