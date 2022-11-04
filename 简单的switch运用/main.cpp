#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入一个百分制作分数：");
    scanf("%d",&a);
    b = a/10;
    printf("你的等级：");
    switch (b)
    {
        case 10:
        case 9:printf("优秀\n");break;
        case 8:printf("良好\n");break;
        case 7:printf("中等\n");break;
        case 6:printf("及格\n");break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:printf("不及格\n");break;
        default:printf("Error\n");
    }
    return 0;
}
