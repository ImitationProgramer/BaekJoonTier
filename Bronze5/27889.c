#include <stdio.h>
#include <string.h>
int main()
{
    char name[5];
    scanf("%s", name);
    if (!strcmp(name, "NLCS"))
        printf("North London Collegiate School");
    else if (!strcmp(name, "BHA"))
        printf("Branksome Hall Asia");
    else if (!strcmp(name, "KIS"))
        printf("Korea International School");
    else if (!strcmp(name, "SJA"))
        printf("St. Johnsbury Academy");
    return 0;
}