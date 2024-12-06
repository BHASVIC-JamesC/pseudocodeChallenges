#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char String[10];
    char Backwards[10];
    printf("enter a sentence");
    int Strlength = strlen(String);
    fflush(stdin);
    gets(String);
    strcpy(Backwards,String);
    for(int i =0;i <= Strlength;i++) {
        Backwards[i] = String[Strlength-i];
    }
    puts(Backwards);
    return 0;
}