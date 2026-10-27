//202610211332
//张裕晟
#include<stdio.h>
int main()
{
    float a=0;
    scanf("%f",&a);
    if(0<a&&a<59.99)
    {
        printf("E");
    }
    else if(60<=a&&a<69.99)
    {
        printf("D");
    }
    else if(70<=a&&a<79.99)
    {
        printf("C");
    }
    else if(80<=a&&a<89.99)
    {
        printf("B");
    }
    else
    {
    printf("A");
    }
    return 0;
}