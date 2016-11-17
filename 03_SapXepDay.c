#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,n,key;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        key = *(p+i);
        for(j=i+1;j<n;j++)
        {
            if(key > *(p+j))
            {
                *(p+i) = *(p+j);
                *(p+j) = key;
                key = *(p+i);
            }
        }
    }
    printf("\nDay da sap xep:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}
