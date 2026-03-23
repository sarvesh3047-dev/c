#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int smallest_common_divisor(int a, int b) {
    
    if (a <= 0 || b <= 0) {
        return 0; 
    }
    
    
    for (int i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1; 
}

int main() {
    int num1, num2;
    
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    
    int gcd_result = gcd(num1, num2);
    
    
    int scd = smallest_common_divisor(num1, num2);
    
    
    printf("Greatest Common Divisor (GCD): %d\n", gcd_result);
    
    if (scd > 1) {
        printf("Smallest Common Divisor (other than 1): %d\n", scd);
    } else {
        printf("No common divisor other than 1.\n");
    }
    
    return 0;
}
