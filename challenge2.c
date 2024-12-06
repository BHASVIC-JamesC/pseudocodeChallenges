#include <stdio.h>

int main(void) {
    int Array[10];
    for(int x = 0;x<9;x++) {
        int number;
        printf("enter number:");
        fflush(stdin);
        scanf("%d",&number);
        Array[x] = number;
    }
    int highest = Array[0];
    for(int i =0;i<=9;i++) {
        if(highest<Array[i]) {
            highest = Array[i];
        }
    }
    printf("%d",highest);
    return 0;
}

