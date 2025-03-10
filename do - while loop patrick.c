 /*using do-while loop
Author:MUTINDA PATRICK 
Reg No: D33-0197-2022 
*/
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    } while(i <= 100);

    return 0;
}