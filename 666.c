#include<stdio.h> 
int main ()
{
 int i,z,x,c,v,b,n,a[51];
 for(i=0;i<51;i++)
     a[i]=0; 
 scanf("%d",&z);
 for(i=0;i<=z/2;i++)
    {
     scanf("%d %d ",&x,&c);
     a[c]+=x;
     }
 scanf("%d",&v);
 for(i=0;i<=v/2;i++)
    {
     scanf("%d %d ",&b,&n);
  a[n]+=b; 
     }
 for(i=50;i>=0;i--)
    {
     if(a[i]!=0)
     printf("%d %d ",a[i],i);
     }       
 return (0);   
}
