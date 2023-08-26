#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000001];
    scanf("%s", word);
    int l = strlen(word);
    for (int i = 0; i < l; i++)
        word[i] -= 32;
    printf("%s", word);
    return 0;
}