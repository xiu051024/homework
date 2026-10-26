// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    double ss;
    printf("请输入实数：");
    scanf("%lf", &ss);
    if(ss > 0)
    {
        printf("正数\n");
    }
    else if(ss < 0)
    {
        printf("负数\n");
    }
    else
    {
        printf("零\n");
    }
    return 0;
}
