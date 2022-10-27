#include<stdio.h> //预处理文件
int main(){
    int y; //定义y为整形
    printf("请输入年份：\n"); //显示内容
    scanf("%d",&y); //输入整形y的值
    if(y%4==0&&y%100!=0) //如果该年份能被4整除同时不能被100整除
        printf("%d年是闰年",y); //输出是闰年
    else if(y%400==0) //如果该年份能被400整除
        printf("%d年是闰年",y); //输出是闰年
    else //否则
        printf("%d年不是闰年",y); //输出不是闰年
    return 0;
}
