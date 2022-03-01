#include <stdio.h>
 
int main() {
    int n, tmp, result = 0, i, digit = 0;
    int temp, sum = 0;
    scanf("%d", &n);
    tmp = n;

    while (tmp) {
        tmp /= 10;
        digit++;
    }

    tmp = n - digit * 9;
    for (i = tmp; i <= n; i++) {
        temp = i;
        sum += temp;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n) {
            result = i;
            break;
        }
        sum = 0;
    }

    printf("%d\n", result);
    return 0;
}
