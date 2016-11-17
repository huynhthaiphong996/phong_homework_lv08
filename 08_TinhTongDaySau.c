#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i;
    float tong=0;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        tong += (float) 1/((i+1));
    }
    printf("\nKet qua = %f",tong);
}

