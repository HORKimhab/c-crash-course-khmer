#include <stdio.h>
#include <stdlib.h>

// #define Var Value // Var as capital letter
#define MinutesPerHours 60

int main()
{
   // Learning Const
   // More: https://www.w3schools.com/c/c_constants.php
   // https://www.tutorialspoint.com/cprogramming/c_constants.htm

   // const dataType var = value;
   const float PI = 3.14;

   // Change Value of PI
   // PI = 3.22;
   // float MinutesPerHours = 22.32;

   printf("Value of PI is: %.2f\n", PI);
   printf("Value of MinutesPerHours: %i", MinutesPerHours);

    return 0;
}
