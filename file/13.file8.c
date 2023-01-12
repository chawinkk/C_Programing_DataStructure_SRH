
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i;
    FILE *fp;
    fp=fopen("table.txt","w");
    if(fp==NULL){
        printf("No file");
        exit(1);
        }
printf("\nEnter number");
scanf("%d",&n);

for(i=1;i<=12;i++){
    printf("%d\n",n*i);
    fprintf(fp,"%d\n",n*i);
}
    fclose(fp);
   return 0;
}