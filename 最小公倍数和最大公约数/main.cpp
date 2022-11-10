#include <stdio.h>
int main()
{
    int m,n,a,b,max,min;
    printf("请输入两个整数：\n");
    scanf("%d,%d",&m,&n);
    a=m*n;
    b=m%n;
    while(b!=0)
    {
        m=n;
        n=b;
        b=m%n;
    }
    max=n;
    min=a/n;
    printf("最大公约数是：%d\n最小公倍数是：%d\n",max,min);
    return 0;
}
