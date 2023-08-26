#include <stdio.h>
#include <string.h>
int main()
{
    char word[10];
    scanf("%s", word);
    if (strcmp(word, "SONGDO") == 0)
        printf("HIGHSCHOOL");
    else if (strcmp(word, "CODE") == 0)
        printf("MASTER");
    else if (strcmp(word, "2023") == 0)
        printf("0611");
    else if (strcmp(word, "ALGORITHM") == 0)
        printf("CONTEST");
    return 0;
}