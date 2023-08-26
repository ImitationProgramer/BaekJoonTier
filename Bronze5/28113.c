#include <stdio.h>

int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    if (A == B)
        printf("Anything");
    else if (A < B)
        printf("Bus");
    else
        printf("Subway");
    return 0;
}