#include <stdio.h>

int main(int argc, char* argv[])
{
   // Declare and initialize three integers
   int a = 4;
   int b = 7;
   int c = 2;
   int max; // Declare a variable to store the maximum value
	
   // Compare a and b to find the maximum, store in max
   if (a > b)
      max = a;
   else
      max = b;

   // Compare c with the previously determined maximum (max)
   // Update max if c is greater
   if (c > max)
      max = c;

   // Print the result
   printf("The biggest number is %d\n", max);

   // Return 0 to indicate successful execution
   return 0;
}
