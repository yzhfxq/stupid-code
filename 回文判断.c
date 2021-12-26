#include <stdio.h>
#include<string.h>
int main()
{
    char c[50];
    gets(c);
    int i=0,n=0,flag=0,count;
    count=strlen(c);
    n=count-1;
    if(count % 2 == 0)
        for(i=0;i<(n+1)/2;i++)
        {
            if(c[i] != c[n-i])
                flag=1;
        }
    else
        for(i=0;i<n/2;i++)
        {
            if(c[i] != c[n-i])
                flag=1;
        }
        if(flag==1)
            printf("No");
        else
            printf("Yes");
            return 0;

}
