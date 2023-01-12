
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    char ch;
    float f;
    char s[10];

    FILE *fp;

    fp=fopen("demo.txt","r");
    if(fp==NULL){
        printf("no file");
        exit(1);
    }
    fscanf(fp,"%c",&ch);
    fscanf(fp,"%d",&n);
    fscanf(fp,"%f",&f);
    fscanf(fp,"%s",s);
    
    printf("%c\n",ch);
    printf("%d\n",n);
    printf("%f\n",f);
    printf("%s\n",s);

   return 0;
}