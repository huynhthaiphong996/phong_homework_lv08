#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*p;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Nhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    printf("\nDay da nhap:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}

