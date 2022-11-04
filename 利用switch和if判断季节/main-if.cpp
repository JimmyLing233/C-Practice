#include<stdio.h>
int main() {
    int a;
    printf("请输入月份：");
    scanf("%d", &a);
    if (a==12||a==1||a==2)
        printf("%d月是冬季\n",a);
    else if (a==3||a==4||a==5)
        printf("%d月是春季\n",a);
    else if (a==6||a==7||a==8)
        printf("%d月夏季\n",a);
    else if (a==9||a==10||a==11)
        printf("%d月是秋季\n",a);
    else
        printf("Error\n");
    return 0;
}
