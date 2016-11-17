#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        if(i==0) *p=1;
        else if(i==1) *(p+1) =1;
        else *(p+i) = *(p+i-1)+*(p+i-2);
    }
    printf("\nDay Fibonacci: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}

