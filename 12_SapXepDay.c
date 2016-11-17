#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,j,i,*p,khoa;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }

    for(i=0;i<n;i++)
    {
        khoa = *(p+i);
        for(j=i+1;j<n;j++)
        {
            if(khoa > *(p+j))
            {
                *(p+i) = *(p+j);
                *(p+j) = khoa;
                khoa = *(p+i);
            }
        }
    }
    printf("\nDay sau khi sap xep: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}


