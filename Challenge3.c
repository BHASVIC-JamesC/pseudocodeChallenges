#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char String[100];
    printf("Enter your string:");
    fflush(stdin);
    gets(String);
    int Stringlength = strlen(String);
    int vowels = 0;
    for(int i = 0;i<=Stringlength;i++) {
        if(toupper(String[i]) == 'A' ||toupper(String[i]) == 'E' ||toupper(String[i]) == 'I' ||toupper(String[i]) == 'O' ||toupper(String[i]) == 'U') {
            vowels ++;
        }
    }
    printf("%d",vowels);
    return 0;
}
