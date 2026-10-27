//202610211332
//张裕晟
#include<stdio.h>
int main()
{
    float a=0;
    float b=0;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    if(op=='/'&&b==0)
    {
        printf("错误 除数不能为0");
    }
    else if(op=='+')
    {
        float c=a+b;
        printf("%f",c);
    }
    else if(op=='-')
    {
        float c=a-b;
        printf("%f",c);
    }
    else if(op=='*')
    {
        float c=a*b;
        printf("%f",c);
    }
    else if(op=='/')
    {
        float c=a/b;
        printf("%f",c);
    }
    else
    {
        printf("没有这个运算符");
    }
    return 0;
}