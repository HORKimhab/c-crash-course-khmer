#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  --- C Condition ---
        1. if(condition){
            is true to execute code...
        }

        2. if(condition){
            is true to execute code...
        }else{
            is false to execute code...
        }

        3. if(condition){
            is true to execute code...
        }
        else if(condition){
            is true to execute code...
        }
        else if(condition){
            is true to execute code...
        }
        else if(condition){
            is true to execute code...
        }
        else{
            is false to execute code...
        }
    */
    int number = 15;
    const int zero_num = 0;
    int result = number > zero_num;
    if(number > zero_num) {
        // 12 is bigger than 0
        printf("%d is bigger than %d\n", number, zero_num);
    }else if(number >= 20){
        printf("%d is bigger or equal to 20.\n", number);
    }else{
        printf("%d is smaller than %d\n", number, zero_num);
    }

    // binary condition
    // syntax: variable = (condition) ? expressionTrue : expressionFalse;
    printf("--- Binary condition --- \n");
    result ? printf("%d is bigger than %d", number, zero_num) : printf("%d is smaller than %d", number, zero_num);


    // practice code with image print screen result | image as code


    return 0;
}
