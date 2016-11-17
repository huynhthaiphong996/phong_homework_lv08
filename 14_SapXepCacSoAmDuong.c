#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p,*a,*d,i,n,k=0,j=0;
    printf("Nhap vao so phan tu cua day:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    a=(int *)malloc(n*sizeof(int));
    d=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }

    for(i=0;i<n;i++)
    {
        if(*(p+i)>=0)
        {
                *(d+j)=*(p+i);
                j++;
        }
        else {
                *(a+k) = *(p+i);
                k++;
        }
    }

    sapxep(j,d);
    sapxep(k,a);
    printf("\nDay so duong:");
    inday(j,d);
    printf("\nDay so am:");
    inday(k,a);

}

void sapxep(int n,int *p)
{
    int j,khoa,i;
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
}

void inday(int n,int *p)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}

