#include <stdio.h>
#include <stdlib.h>
void main()
{
    int k,j,i;
    int *p = (int *)malloc(10* sizeof(int));
    for(i=2;i<10;i++)
    {

           for(j=0;j<10;j++)
           {
               *(p+j)=i*(j+1);
           }
           printf("\nBang cuu chuong %d:",i);
           for(k=1;k<=10;k++)
        {
            printf("\n%dx%d=%d",i,k,*(p+k-1));
        }
        free(p);
    }

}


