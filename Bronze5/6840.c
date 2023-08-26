#include <stdio.h>

int main()
{
    int bear[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &bear[i]);
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (bear[i] > bear[j])
            {
                int temp = bear[i];
                bear[i] = bear[j];
                bear[j] = temp;
            }
    printf("%d", bear[1]);
    return 0;
}