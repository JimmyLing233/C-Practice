#include<stdio.h>
int main()
{
    int a[10],b,c,d,e;//b是平均值，c是最大值，d是最小值
    printf("请输入10个整数：");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    b=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9])/10;
    c=a[0];
    d=a[0];
    for(int e=0;e<10;e++)
    {
        if(a[e]>c)
        {
            c=a[e];
        }
        if(a[e]<d)
        {
            d=a[e];
        }
    }
    printf("avg=%d,max=%d,min=%d",b,c,d);
    return 0;
}
