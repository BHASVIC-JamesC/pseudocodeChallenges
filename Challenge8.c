#include <locale.h>
#include <stdio.h>

int main(void) {
    int number = 0;
    printf("enter a number:");
    fflush(stdin);
    scanf("%d",&number);
    int Fibonacci[number];
    int oldNumber = 1;
    int Current = 1;
    for(int i = 1;i<number;i++) {
        Fibonacci[i] = oldNumber + Current;
        Current = Current + oldNumber;
    }
    for(int x = 0;x<number;x++) {
        printf("%d",Fibonacci[x]);
    }
    return 0;
}
