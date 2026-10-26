// 202610125210
// 周浩然
#include <stdio.h>
int main()
{
    float ssd;
    printf("请输入摄氏温度：");
    scanf("%f", &ssd);
    float hsd = ssd * 9.0 / 5 + 32;
    printf("华氏温度 = %.1f\n", hsd);
    return 0;
}
