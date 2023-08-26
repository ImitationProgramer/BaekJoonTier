#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s", word);
    int cnt = 0;
    for (int i = 0; word[i] != '\0'; i++)
        cnt++;
    printf("%d", cnt);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    printf("%d", n);
    return 0;
}
*/