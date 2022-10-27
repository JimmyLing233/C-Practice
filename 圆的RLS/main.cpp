#include<stdio.h> //预处理
#define PI 3.14159 //定义PI为3.14159
int main() //主函数
{
    float r,l,s; //定义浮点型变量r,l,s
    printf("r="); //显示r=
    scanf("%f",&r); //输入浮点数赋予r
    l=2.0*PI*r;
    s=PI*r*r;
    printf("%f,%f\n",l,s); //输出浮点数l,s并换行
    return 0; //返回0并结束
}
