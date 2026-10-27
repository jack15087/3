//202610211332
//张裕晟
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("能构成三角形");
    }
    else
    printf("不能构成三角形");
}
