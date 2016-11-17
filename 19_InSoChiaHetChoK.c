#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n,k,i;
    printf("\nNhap n:");
    scanf("%d",&n);
    printf("\nNhap k:");
    scanf("%d",&k);
    printf("\nCac so chia het cho k la:");
    for(i=1;i<=n;i++)
    {
        if(i%k==0) printf("%d  ",i);
    }
}
