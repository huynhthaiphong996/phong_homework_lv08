#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,dem=1,k=0,i,j,*p;
    printf("Nhap cap ma tran vuong:");
    scanf("%d",&n);
    p=(int *)malloc((n*n)*sizeof(int));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        *(p+k) = dem;
        dem++;
        k++;
    }
    for(i=0;i<n;i++)
    {
        int temp=i;
        printf("%d\t",*(p+i));
        for(j=0;j<n-1;j++)
        {

            temp = temp+n;
            printf("%d\t",*(p+temp));

        }
        printf("\n");
    }
}

