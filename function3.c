#include <stdio.h>
int main()
 {
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d. and gcd is %d", n1, n2, lcm,gcd);
    int x = -6/-7;
    printf("%d",x);
    return 0;
}