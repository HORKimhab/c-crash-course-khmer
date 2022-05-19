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
   int d = 19;

    d -= k; // d = d - k;
   printf("d -= k %d \n", d);

     a *= b; // a = a * b; // 36
   printf("a *= b == %d \n", a);

    // 22 == 92 is 0
    printf("%d == %d is %d \n", k, h, k == h);

    printf("%d >= %d is %d \n", k, h, k >= h);

    printf("%d <= %d is %d \n", k, h, k <= h);
    return 0;
}
