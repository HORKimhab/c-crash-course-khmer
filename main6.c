#include <stdio.h>
#include <stdlib.h>

int main()
{
   // C Operator
   int k = 22;
   int h = 92;
   int kh;
   int a= 9, b= 4, ab;
   float kd = 22.5;
   float ka = 112.5;

   kh = k + h;
   printf("k+h = %d \n", kh);

   ab = a%b;
   printf("a%b = %d \n", ab);

   ab = a/b;
   printf("a/b = %d \n", ab);

   // increment or decrement operator
   printf("--k = %d \n", --k); // k = 21
   printf("++h = %d \n", ++h); // 93

   printf("--kd = %f \n", --kd); // k = 21
   printf("++ka = %f \n", ++ka); // 93

   printf("kh-- = %d \n", kh--); // 92 + 22 = 104
    return 0;
}
