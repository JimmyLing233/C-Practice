#include<stdio.h>
int main(){
    int x;
    printf("请输入一整数：");
    scanf("%d",&x);
    if (x > 0)
        printf("阶跃函数值为：1");
    else if (x == 0)
        printf("阶跃函数值为：0");
    else
        printf("阶跃函数值为：-1");
    return 0;
};
