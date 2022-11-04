#include<stdio.h>
int main()
{
    int a;
    printf("请输入成绩：");
    scanf("%d",&a);
    switch (a)
    {
        case 90 ... 100:printf("A\n");break;
        case 80 ... 89:printf("B\n");break;
        case 70 ... 79:printf("C\n");break;
        case 60 ... 69:printf("D\n");break;
        case 0 ... 59:printf("E\n");break;
        default:printf("Error\n");
    }
    return 0;
}
