//Printing function
void show_array(int numbers[]){
    printf("\n");
    for (int z = 0; z<12; z++){
        printf("%d ",numbers[z]);
    }
    printf("\n");
}
// Filling up the array with random
int *start_Random(int *nu){
    srand(time(NULL));
    for (int i = 0; i <= 12; i++){
        nu[i] = rand()% (49 + 1 - 1) + 1;
    }
    return nu;

}
//Sorting the array in ascending order
int *Storting(int *numbers){
    int temp;
    for (int a = 0; a < 12; a++){
        for (int b = 0; b < 12; b++){
            if (numbers[a] < numbers[b]){
                temp = numbers[b];
                numbers[b] = numbers[a];
                numbers[a] = temp;
            }

        }
    }

    return numbers;    

}