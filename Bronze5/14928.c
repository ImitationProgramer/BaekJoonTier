#include <stdio.h>
#include <string.h>

int main()
{
    char num[1000002];
    scanf("%s", num);
    int ans = 0;
    for (int i = 0; i < strlen(num); i++)
        ans = (ans * 10 + (num[i] - '0')) % 20000303;
    printf("%d", ans);
    return 0;
}