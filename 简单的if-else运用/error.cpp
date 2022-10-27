#include<stdio.h>
int main()
{
int a,b;
int t;
t=(a+b)/2;
printf("输入两门课的成绩：");
scanf("%d,%d",&a,&b);
if(t>=90){
printf("优等生\n");
}else{
Printf("加油！\n");
}
return  0;
}
//此代码将输出错误的结果，导致无论输入什么都会输出“加油！”
