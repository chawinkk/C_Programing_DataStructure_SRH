
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int n;
FILE *fp; //file pointer
fp=fopen("number.txt","a");
if(fp==NULL){
    printf("Cannot file file");
    exit(1);
}
printf("\nEnter a Number");
scanf("%d",&n);

fprintf(fp,",%d\n",n);
printf("\nEnter file succesfully..");
    return 0;
}