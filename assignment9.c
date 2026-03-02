#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    if (sum == n) {
         printf("%d is an Armstrong Number.\n", n);
    } else {
         printf("%d is not an Armstrong Number.\n", n);
    }
    return 0;
}
