//
// Created by 尹子豪 on 2021/12/26.
//
#include<stdio.h>
int f(int n)
{
    if(n==0) return 0;
    else if(n==1)  return 1;
    else if (n==2) return 1;
    else if(n>2) return f(n-1)+f(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
