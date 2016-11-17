#include <stdio.h>
void main()
{
    int a,b,c,max,min;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("\nNhap b:");
    scanf("%d",&b);
    if(a==0 || b==0 )
    {
        printf("\nUCLN = %d\nBCNN = %d",a+b,0);
        return;
    }
    else if(a>b)
    {
        max = a;
        min = b;
    }else
    {
        max = b ; min = a;
    }
    while(min!= 0)
    {
        c=max%min;
        max = min;
        min = c;
    }
    printf("\nUCLN = %d",max);
    printf("\nBCNN = %d",(a*b)/max);

}

