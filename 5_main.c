// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    int a, b;
    char ysf;
    printf("输入算式\n");
    scanf("%d %c %d", &a, &ysf, &b);
    if(ysf == '+')
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if(ysf == '-')
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if(ysf == '*')
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if(ysf == '/')
    {
        if(b != 0)
        {
            printf("%d / %d = %.2f\n", a, b, (float)a / b);
        }
        else if(b == 0)
        {
            printf("除数不能为0\n");
        }
    }
    else
    {
        printf("无效\n");
    }
}