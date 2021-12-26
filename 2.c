#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i=0,j=0,k=0,n=0,q=0,w=0;
   while(1)
    {
        scanf("%d", &a[i]);
        if (a[i] == -1)break;
        i++;q++;
    }
    while(1)
    {
        scanf("%d",&b[j]);
        if(b[j] == -1)break;
        j++;w++;
    }
    n = 0;i=0;j=0;
    for(i=0;i<q;i++)
    {
        for(j=0;j<w;j++)
        {
            if(a[i]==b[j])
            {
                c[k] = a[i];
                k++;
                n++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n-1;j++)
	{
        if (c[j]>c[j+1])
        {t=c[j];
            c[j]=c[j+1];
            c[j+1]=t;}
        }

    for(k=0;k<n;k++)
    {

        printf("%d",c[k]);
    }
    return 0;
}
