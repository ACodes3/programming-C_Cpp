#include <stdio.h>

// funkcija!
int maxNum(int x, int y)
{
   return (x > y? x : y);
}

int main(int argc, char* argv[])
{
   int a = 4;
   int b = 7;
   int c = 2;
   int max = maxNum(a, b);
   max = maxNum(max, c);

   printf("Biggest number is %d\n", maxNum(maxNum(a, b), c));
   return 0;
}
