#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// This is the file that holds all the 
#include "12.ChawinSungwalngern_Quiz1.h"

 // functions in your main program

int main(){

	// define an array to hold 12 numbers
    int basic[12];
	int *numbers;
    int *numbers_ready;

	// call random number generator to fill the array with unique numbers between 1 and 95
	 // one function call only
    numbers = start_Random(basic);
    
	// print the unsorted array
	 // one function call only
     show_array(numbers);

	// sort the array in place
	 // one function call only
    numbers = Storting(numbers);

	// print the sorted array
	// one function call only
    printf("\n\n");
    show_array(basic);
    printf("\n\n");

	return 0; // successful ending of the program
}// end of main function








