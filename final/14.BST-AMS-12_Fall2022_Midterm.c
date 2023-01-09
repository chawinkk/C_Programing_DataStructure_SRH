#include <stdio.h>
#include <math.h>

// Function prototypes 
double approximateFunction(double x, int N);
double myPowerFunct(double y, int N);
long myFactorial(int K); 

int main()
{
   double x, trueSolution, approximateSolution, relativeError;
   int n;
   printf("Please enter x and N for which you want the approximate series can be computed\n");
   scanf("%lf%d", &x, &n);
   trueSolution = exp(x);
   // compute the approximate value for e^x using N terms 
   approximateSolution = approximateFunction(x, n);
   // Display result 
   printf("The exact solution is: %lf\n", trueSolution);
   printf("For the N = %d terms the approximates solution is: %lf\n", n, approximateSolution);
   relativeError = trueSolution - approximateSolution;
   printf("The relative error is: %lf\n", relativeError);
   return 0;
}

// Function definitions 
double approximateFunction(double x, int N)
{
   double result = 0;
   for (int i = 0; i <= N; i++)
   {
      result += myPowerFunct(x, i) / myFactorial(i);
   }
   return result;
}
double myPowerFunct(double y, int N)
{
   double result = 1;
   result = pow(y, N);
   return result;
}
long myFactorial(int K)
{
   if (K <= 1)
      return 1;
   else
      return K * myFactorial(K - 1);
}