#include<stdio.h>
int main()
{
    char a[100];
    int b=0,c=0,d=0,e=0,i=0;//b,c,d,e分别代表字母、数字、空格、其他
    printf("请输入字符串：");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            b++;
        else if(a[i]>='0'&&a[i]<='9')
            c++;
        else if(a[i]==' ')
            d++;
        else
            e++;
        i++;
    }
    printf("字母个数为：%d,数字个数为：%d,空格个数为：%d,其他字符个数为：%d",b,c,d,e);
    return 0;
}
