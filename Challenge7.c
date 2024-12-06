#include <stdio.h>

int main(void) {
    int number = 0;
    printf("enter number:");
    fflush(stdin);
    scanf("%d",&number);
    int Factorial = 1;
    for(int i =2;i<=number;i++) {
        Factorial = Factorial * i;
    }
    printf("%d",Factorial);
    return 0;
}
