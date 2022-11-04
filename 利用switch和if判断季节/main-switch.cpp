#include<stdio.h>
int main()
{
    int a;
    printf("请输入月份：");
    scanf("%d",&a);
    switch (a) 
    {
        case 12:
        case 1:
        case 2:printf("%d月是冬季\n",a);break;
        case 3:
        case 4:
        case 5:printf("%d月是春季\n",a);break;
        case 6:
        case 7:
        case 8:printf("%d月是夏季\n",a);break;
        case 9:
        case 10:
        case 11:printf("%d月是球季\n",a);break;
        default:printf("Error\n");
    }
    return 0;
}
