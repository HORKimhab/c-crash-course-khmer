#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Learning comment in c now
    /*
        printf("Hello Universe from HKimhab!\n");
        return 0;
    */
    int age = 10;
    char myname = 'H';
    int _age = 22;
    int _1age = 22;
    float num = 92.345;

    // printf("%i", variable);
    printf("My age is: %i\n", _1age);
    printf("%c\n", myname);

    // Declare variable of string
    char fN[] = "HKimhab";
    printf("My name is: %s\n", fN);

    char greetings[] = "Hello Universe!";
    printf("%s\n", greetings);

    // 92.345 = %.3f = 92.345 // %f
    // printf("Float number is: %.4f", num);
    printf("Float number is: %.2f", num);

    printf("\nHello comment from your Crush.");
    return 0;
}
