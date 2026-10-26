// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("输入三个边长：");
    scanf("%f %f %f", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
    {
        printf("能构成三角形\n");
    }
    else
    {
        printf("不能构成三角形\n");
    }
    return 0;
}