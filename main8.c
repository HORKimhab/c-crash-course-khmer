#include <stdio.h>
#include <stdlib.h>

int main()
{
    // C Operator
    // Logical and Sizeof
    int k = 12, d = 12, hs = 192, result;
    int k1;
    float k2;
    double k3;
    char k4;

    result = (k == d) && (k < hs); // 1 && 1 = 1
    printf("(k == d) && (k < hs) is %d \n", result);

    result = !(k != hs); // !(1) = 0
    printf("!(k != hs) %d \n", result);

    printf("Size of int=%lu bytes\n", sizeof(k1));
    printf("Size of float=%lu bytes\n", sizeof(k2));
    printf("Size of double=%lu bytes\n", sizeof(k3));
    printf("Size of char=%lu bytes\n", sizeof(k4));
    return 0;
}
