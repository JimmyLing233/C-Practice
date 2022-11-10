#include<stdio.h>
int main()
{
    char e; //e为输入的内容
    int a=0,b=0,c=0,d=0; //a,b,c,d分别表示数字、字母、、空格和其他字符的个数
    printf("请输入一行字符：\n");
    while ((e=getchar())!='\n') //在回车时结束
    {
        if (e >='0'&&e<='9')
            a++;
        else if ((e>='a'&&e<='z')||(e>='A'&&e<='Z'))
            b++;
        else if (e==' ')
            c++;
        else
            d++;
    }
    printf("数字个数为：%d，字母个数为：%d，空格个数为：%d，其他字符个数为：%d\n",a,b,c,d);
    return 0;
}
