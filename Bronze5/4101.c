#include <stdio.h>

int main()
{
    int A, B;
    do
    {
        scanf("%d %d", &A, &B);
        if (A == 0 && B == 0)
            break;
        else if (A <= B)
            printf("No\n");
        else
            printf("Yes\n");
    } while (A != 0 && B != 0);
    return 0;
}