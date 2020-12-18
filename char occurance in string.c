// Number of occurance of char in string

#include <stdio.h>

int main() {
    char str[1000], char;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &char);

    for (int i = 0; str[i] != '\0'; i++) {
        if (char == str[i])
            count++;
    }

    printf("No. of occurance of %c = %d", char, count);
    
    return 0;
}