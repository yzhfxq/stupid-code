#include<stdio.h>
int main()
{
	int a[10];
	int i ,j ,t;
	printf("input ten numbers:\n");
	for(i=0;i<10;i++)
	scanf("%d ",&a[i]);
	printf("\n");
	for(j=0;j<10;j++)
	for(i=0;i<9-j;i++)
if(a[i+1]<a[i])
{t=a[i+1];
a[i+1]=a[i];
a[i]=t;
}
	printf("the sortd numbers:\n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}
