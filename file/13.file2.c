//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int n;
FILE *fp; //file pointer
fp=fopen("number.txt","r");

if(fp==NULL){
    printf("Cannot find file");
    exit(1);
}
fscanf(fp,"%d",&n);
printf("\nNumber=%d",n);
fclose(fp);
    return 0;
}