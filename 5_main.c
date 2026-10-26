// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    double a, b;
    char ysf;
    scanf("%lf %c %lf", &a, &ysf, &b);
    if(ysf == '+')
    {
        printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
    }
    else if(ysf == '-')
    {
        printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
    }
    else if(ysf == '*')
    {
        printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
    }
    else if(ysf == '/')
    {
        if(b != 0)
        {
            printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
        }
        else if(b == 0)
        {
            printf("错误：除数不能为 0\n");
        }
    }
    else
    {
        printf("错误：不支持的运算符\n");
    }
}