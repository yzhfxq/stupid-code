#include<stdio.h>
int main()
{
    int n,m,q;
    int s=0,i=0,a[999],c=0;
    scanf("%d%d%d",&n,&m,&q);
    for(i=0;i<n;i++)
    {
        a[i]=1;
    }
    i=q-1;
    while(i<n)
    {
        s=s+a[i];
        i=(i+1)%n;
        if(s%m==0)
        {
            a[((i - 1) + n) % n] = 0;
            c=c+1;
        }
        if(c==n)break;
    }
    {
        if(a[i]==1)
            printf("%d", i + 1);
        else
            printf("1");
    }
    return 0;
}
