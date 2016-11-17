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
    i=0;
    while(i!=k)
    {
         if((i+1)%n==0) printf("%d\n",*(p+i));
        else printf("%d\t",*(p+i));

        i++;
    }
}

