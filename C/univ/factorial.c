#include <stdio.h>

int main() {
    int n, res = 1;

    printf("Enter Number to calculate => ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) res *= i;
    printf("The result is: %d\n", res);

    return 0;
}
