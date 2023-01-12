
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i,f=1;
    FILE *fp;
    fp= fopen("fac.txt","w");
    if(fp==NULL){
        printf("no file");
        exit(1);
    }
    printf("\n Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("File successfully write");
    printf("Factorial is %d",f);
    fprintf(fp,"Factorial is %d",f);

    fclose(fp);
   return 0;
}