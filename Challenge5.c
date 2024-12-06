#include <stdio.h>
#include <string.h>
#include <ctype.h>

// theres a mistake on line 13 and line 18

int main(void) {
    int number;
    printf("enter a number");
    fflush(stdin);
    scanf("%d",&number);
    int Prime = 0;
    for(int i = 2;i<=number;i++) {
        if(number % i == 0) {
            Prime = 1;
        }
    }
    if(Prime ==1) {
        printf("that is a prime number");
    }
    else {
        printf("that is not prime");
    }
    return 0;
}
