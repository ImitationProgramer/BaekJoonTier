#include <stdio.h>

int main()
{
    char word[4];
    scanf("%s", word);
    for (int i = 2; i >= 0; i--)
        printf("%c", word[i]);
    return 0;
}