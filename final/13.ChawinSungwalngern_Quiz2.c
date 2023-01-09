/*Question. Write a C program that generates 1000 random numbers between 1 and 49 inclusive and stores them into an array first. Then have 3 functions, which accepts the array as argument and perform the followings:
	•	Find the minimum value of all numbers, 
	•	Find the maximum value of all numbers, and
	•	Find the average of all numbers 

Once all the computations re done then; print min, max, and the average of numbers. Additionally, measure the time in milliseconds or microseconds for the average computation (Hint: Use time.h header file). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototype 
int max(int random[]);
int min(int random[]);
int avg(int ma, int mi);
//end of prototype 
int main()
{
  long total_time_before=clock(); //start time measurement of the whole running time

  srand( time(NULL) ); //seed for random
  int random[1000]; //varaible of 1000 array 
  int ma, mi, avgg;//variable for functions
  
  for (int i = 0; i < 1000; i++) //genetrate random number 1000 time from 1-50 and store varaible array
  random[i] = (rand() % 49) + 1;      
  
  /* for (int i = 0; i < 1000; i++){ printf("a[%d]=%d\n", i, a[i]);}*/

ma=max(random); printf("\nMaximum= %d",ma); //call function maximum and display
mi=min(random); printf("\nMinimum= %d",mi); //call function minimum and display

long time_before=clock(); //start time measurement of the running time before avg function
avgg=avg(ma,mi); printf("\nAvergae= %d",avgg); //call function avg and display
long time_after=clock(); //end time measurement of the running time after avg function

double time_avg=(double)(time_after-time_before)/CLOCKS_PER_SEC; //time average varibel and cast them to (double) formular: (after-before)/CLOCKS_PER_SEC
printf("\nAverage computation of avearge function %f seconds",time_avg);

long total_time_after=clock(); //end time measurement of the running time after whole 
double total_time=(double)(total_time_after-total_time_before)/CLOCKS_PER_SEC; //total time varibel and cast them to (double) formular: (after-before)/CLOCKS_PER_SEC

printf("\nTotal time using in program %f seconds\n\n",total_time);
  return 0;
}

int max(int random[]){
  int indicator=-1;
  for(int i=0;i<1000;i++){
    if(random[i]>indicator)
    indicator=random[i]; //-1vs. 40=>indicator became 40 //40vs. 49=>incator became 49 //return 49
  }
  return indicator;
}

int min(int random[])
{
  int i,indicator=50;

  for(i=0;i<1000;i++)
  {
    if(random[i]<indicator)
    indicator=random[i]; //50vs. 40=>indicator became 40 //40vs. 2=>incator became 2 //return 2
  }
  return indicator;
}

int avg(int ma, int mi){
  int result;
  result=(ma-mi)/2;
return result;

}