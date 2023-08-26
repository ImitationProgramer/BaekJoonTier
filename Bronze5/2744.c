#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
            word[i] += 32;
        // if (word[i] >= 97 && word[i] <= 122)
        else
            word[i] -= 32;
    }
    printf("%s", word);
    return 0;
}