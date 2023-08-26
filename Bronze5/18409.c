#include <stdio.h>

int main()
{
    char n[51], vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    int cnt = 0, N = 0;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++)
        scanf("%c", &n[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (n[i] == vowel[j])
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}