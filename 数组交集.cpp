#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,j,k;
    for(i=0;i<20;i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] == -1)break;
    }
    for(j=0;j<20;j++)
    {
        scanf("%d ",&b[j]);
        if(b[j]==-1)break;
    }
    for(k=0;k<20;k++)
    {
        if(a[i]==b[j])c[k]=a[i]=b[j];
    }
    printf("%d ",c[k]);
    return 0;
}
