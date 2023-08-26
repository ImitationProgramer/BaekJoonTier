#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int result = (a * a + b * b + c * c + d * d + e * e) % 10;
    printf("%d", result);
    return 0;
}