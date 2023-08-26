#include <stdio.h>
#include <string.h>

int main()
{
    char jh[1001], doc[1001];
    scanf("%s%s", jh, doc);
    if (strlen(jh) >= strlen(doc))
        printf("go");
    else
        printf("no");
    return 0;
}