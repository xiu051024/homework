// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    float cj;
    printf("输入成绩：");
    scanf("%f", &cj);
    if(100>cj && cj>90)
    {
        printf("A\n");
    }
    else if(89.99>cj && cj>80)
    {
        printf("B\n");
    }
    else if(79.99>cj && cj>70)
    {
        printf("C\n");
    }
    else if(69.99>cj && cj>60)
    {
        printf("D\n");
    }
    else if(59.99>cj && cj>0)
    {
        printf("E\n");
    }
    else
    {
        printf("输入无效\n");
    }
    return 0;
}
