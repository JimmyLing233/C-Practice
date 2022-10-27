#include<stdio.h>
int main(){
    int x;
    printf("请输入成绩：\n");
    scanf("%d",&x);
    if(x<60)
        printf("不及格");
    else if(x>=60&&x<=69)
        printf("及格");
    else if(x>=70&&x<=79)
        printf("中等");
    else if(x>=80&&x<=89)
        printf("良好");
    else
        printf("优秀");
    return 0;
}
