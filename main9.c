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
    int number = -12;
    const int zero_num = 0;
    if(number > zero_num) {
        // 12 is bigger than 0
        printf("%d is bigger than %d", number, zero_num);
    }else{
        printf("%d is smaller than %d", number, zero_num);
    }
    return 0;
}
