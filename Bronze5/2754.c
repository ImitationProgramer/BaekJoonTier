// 학점 계산기
#include <stdio.h>

int main()
{
    char score[3];
    scanf("%s", score);
    double result = 0;
    switch (score[0])
    {
    case 'A':
        result = 4;
        break;
    case 'B':
        result = 3;
        break;
    case 'C':
        result = 2;
        break;
    case 'D':
        result = 1;
        break;
    case 'F':
        result = 0;
        break;
    }
    switch (score[1])
    {
    case '+':
        result += 0.3;
        break;
    case '0':
        result += 0;
        break;
    case '-':
        result -= 0.3;
        break;
    }
    printf("%.1f", result);
    return 0;
}