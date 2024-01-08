#include <stdio.h>

int main(int argc, char* argv[])
{
   int a = 4;
   int b = 7;

   int total;         // total = ? 
   int left;       // left = ?
   total = a + b;      // total = 11, left = ?
   left = a - b;    // total = 11, left = -3

   printf("The total is %d, left is %d\n", total, left);
   return 0;
}
