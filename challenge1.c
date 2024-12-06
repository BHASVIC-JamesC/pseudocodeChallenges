#include <stdio.h>

int main(void) {
    int Array[10];
    for(int x = 0;x<9;x++) {
        int number;
        printf("\nenter number:");
        fflush(stdin);
        scanf("%d",&number);
        Array[x] = number;
    }
    int Total = 0;
    for(int i = 0;i<=9;i++) {
        Total = Total + Array[i];
    }
    printf("%d",Total);
    return 0;
}
