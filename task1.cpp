#include <stdio.h>

int main() {
    int n, digit, result = 0, multiplier = 1;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);
    while(n > 0) {
        digit = n % 10;
        result += ((digit + 1) % 10) * multiplier;
        multiplier *= 10;
        n /= 10;
    }
    printf("New number: %05d\n", result);
    return 0;
}

