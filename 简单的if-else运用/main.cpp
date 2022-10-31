#include<stdio.h>
int main()
{
    int a,b;
    int t;
    printf("输入两门课的成绩：");
    scanf("%d,%d",&a,&b);
    t=(a+b)/2;
    if (t>=90)
        printf("优等生\n");
    else
        printf("加油！\n");
    return  0;
}
