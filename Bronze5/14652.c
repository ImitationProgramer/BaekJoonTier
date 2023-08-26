#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    printf("%d %d", k / m, k % m);
    return 0;
    //     int seat[n][m];
    //     int num = 0;
    //     for (int i = 0; i < n; i++)
    //         for (int j = 0; j < m; j++)
    //             seat[i][j] = num++;
    //     for (int i = 0; i < n; i++)
    //         for (int j = 0; j < m; j++)
    //             if (k == seat[i][j])
    //                 printf("%d %d", i, j);
    //     return 0;
}