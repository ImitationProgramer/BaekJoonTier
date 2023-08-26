#include <stdio.h>

int main()
{
    long long N, M;
    scanf("%lld %lld", &N, &M);
    if (N < M)
    {
        long long temp = N;
        N = M;
        M = temp;
    }
    printf("%lld", N - M);
    return 0;
}