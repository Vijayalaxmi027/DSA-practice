#include <stdio.h>

int main() {
    int n, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
