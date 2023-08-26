#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f;
    scanf("%d", &n);
    int *array = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    scanf("%d", &f);
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (f == array[i])
            cnt++;
    printf("%d", cnt);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int i, N, array[100] = {0}, v;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d ", &array[i]);
    int cnt = 0;
    scanf("%d", &v);
    for (i = 0; i < N; i++)
        if (v == array[i])
            cnt++;
    printf("%d", cnt);
    return 0;
}
*/