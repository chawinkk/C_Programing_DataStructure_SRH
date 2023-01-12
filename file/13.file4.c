
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    fp=fopen("demo.txt","w");
    if(fp==NULL){
        printf("no file");
        exit(1);
    }
    fprintf(fp,"%s\n","a");
    fprintf(fp,"%d\n",2);
    fprintf(fp,"%f\n",2.22);
    fprintf(fp,"%s\n","Chawin");
    printf("data is sucessful stored");
    fclose(fp);
   return 0;
}