#include <stdio.h>
int main() {
    int i, n, num1 = 0, num2 = 1, num3;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    printf("Fibonacci Series is: ");

    for (i = 1; i <= n; i++) {
        printf("%d, ", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}