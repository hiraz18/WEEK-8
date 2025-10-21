#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int hcf = gcd(n1, n2);
    int lcm = (n1 * n2) / hcf;
    printf("LCM: %d, HCF: %d\n", lcm, hcf);
    return 0;
}

