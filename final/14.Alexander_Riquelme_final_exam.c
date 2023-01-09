#include <stdio.h>
#include <stdlib.h>
//function prototypes go here
void *Read_numbers(int numbers[]);
void *printarray(int numbers[]);
void *sortarray(int numbers[]);
int main(){
    
    //define an array to hold 6 numbers
    int numbers[6];
    
    //read numbers from the file Numbers.txt to fill the array
    Read_numbers(numbers);
    
    //print unsorted array
    printarray (numbers);
    
    //sort the array in place
    sortarray(numbers);
    
    // print sorted array
    printarray(numbers);
    
    return 0;
    
    
    

}// end of  main function

//Function definitions
void *Read_numbers(int numbers[]){
    FILE *fp;
    fp =fopen("14.numbers.txt", "r");
    if(fp == NULL){  
        exit(1);             
    }
    
    

    for (int i= 0; i<=6;i++){
        fscanf(fp,"%d,",&numbers[i]);
    }
    
}
void *printarray(int numbers[]){
    printf("\nnumbers: \n");
    for (int x = 0;x<6;x++){
        printf(" %d ",numbers[x]);
    }
    printf("\n");
    
}
void *sortarray(int numbers[]){
    int temp;
    for (int a = 0; a < 6; a++){
        for (int b = 0; b < 6; b++){
            if (numbers[a] < numbers[b]){
                temp = numbers[b];
                numbers[b] = numbers[a];
                numbers[a] = temp;
            }

        }
    }
}
