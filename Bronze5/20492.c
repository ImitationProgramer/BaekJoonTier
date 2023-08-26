#include <stdio.h>

int main()
{
    int m, all, part;
    scanf("%d", &m);
    all = m * 0.78;
    part = m - (m * 0.2 * 0.22);
    printf("%d %d", all, part);
    return 0;
}