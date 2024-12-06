#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    int Array[10] = {0};
    for(int x = 0;x<9;x++) {
        int number;
        printf("enter number:");
        fflush(stdin);
        scanf("%d",&number);
        Array[x] = number;
    }
    int change =0;
    int temp = 0;
    while(change == 0) {
        change = 1;
        for(int i =1;i<9;i++) {
            temp = Array[i-1];
            if(Array[i]<Array[i-1]) {
                Array[i-1] = Array[i];
                Array[i] = temp;
                change = 0;
            }
        }
    }
    for(int x = 0;x<9;x++) {
        printf("%d,",Array[x]);
    }
    return 0;
}
