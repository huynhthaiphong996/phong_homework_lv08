#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,*p,i,k,dem=0;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    printf("\nDay so da nhap la:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
    printf("\nNhap gia tri cua phan can xoa:");
    scanf("%d",&k);

     for(i=0;i<n;i++)
    {
        if(*(p+i)== k) dem++;
    }
    while(dem>0)
    {
        for(i=0;i<n;i++)
        {
            if(*(p+i)==k)
            {
               int j;
               for(j=i;j<n;j++)
               {
                   *(p+j)=*(p+j+1);
               }
               n--;
                p = (int *)realloc(p,n*sizeof(int));
                break;
            }
        }

        dem--;
    }

    printf("\nDay sau khi da xu ly:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }

}
