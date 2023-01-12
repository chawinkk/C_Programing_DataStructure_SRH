
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n1, n2;
    FILE *fp;
    fp=fopen("number.txt","r"); //13.file1
    if(fp==NULL){
        printf("no file");
        exit(1);
    }
    printf("\n Enter number");
    scanf("%d",&n1);
    fscanf(fp,"\n%d",&n2);
    if(n1==n2){
        printf("\nnumber are equal");
    }
    else{
        printf("\nnumber are not equal");
    }
   return 0;
}