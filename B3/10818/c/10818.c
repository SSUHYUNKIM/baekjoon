#include <stdio.h>
 
int main(){
    int i, n, num, min = 1000000, max = -1000000;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &num);
        if (num >= max)
            max = num;
        if (num <= min)
            min = num;
    }
    printf("%d %d", min, max);
 
    return 0;
}