#include <stdio.h>
void main()
{
    int n,i,kt,tong=0;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nDay cac so nguyen to:");
    for(i=2;i<=n;i++)
    {
        kt=KiemtraNT(i);
        if(kt==1)
        {
            printf("%d ",i);
            tong++;
        }
    }
    printf("\nCac so nguyen to nho hon n la:%d",tong);

}
int KiemtraNT(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

