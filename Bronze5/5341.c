#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        printf("%d\n", sum);
    }
    return 0;
}