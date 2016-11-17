#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n,i,tong=0;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        tong += *(p+i);
    }
    printf("\nTong = %d",tong);
    free(p);
}
