
//https://www.youtube.com/watch?v=_RpI7kSv3S4&list=PL-gW8Fj5TGrpVCun29h8HqtysUq6OPq3X&index=4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int i,input[10];

FILE *fp;
fp=fopen("array.txt","wb");
if(fp==NULL){
   printf("No file");
   exit(1);
}
else{
   printf("\nEnter 10 elements");
   for(i=0;i<10;i++){
         printf("\nEnter element %d: ",i);
         scanf("%d",&input[i]);
   }
   fwrite(input,sizeof(int),10,fp);
}
fclose(fp);
/////open again
fp=fopen("array.txt","rb");
if(fp==NULL){
   printf("No file");
   exit(1);
}
else{
   fread(input,sizeof(int),10,fp);
   printf("\nArray from file");
   for(i=0;i<10;i++){
      printf("\nElement %d is %d",i,input[i]);
   }
}
fclose(fp);
   return 0;
}