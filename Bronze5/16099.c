#include <stdio.h>

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);

    while (numTestCases--)
    {
        long long lt, wt, le, we; // Use long long to handle large values
        scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);

        long long areaTelecom = lt * wt;
        long long areaEurecom = le * we;

        if (areaTelecom > areaEurecom)
        {
            printf("TelecomParisTech\n");
        }
        else if (areaEurecom > areaTelecom)
        {
            printf("Eurecom\n");
        }
        else
        {
            printf("Tie\n");
        }
    }

    return 0;
}
