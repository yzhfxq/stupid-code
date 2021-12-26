#include<stdio.h>
#include<math.h>


	double jc(int x)
	{
		if(x==0)return 1;
		else return x*jc(x-1);
	}
	int main()
	
	{
	  
	int n;
	double x, sinx=0.0;
	scanf("%lf %d",&x,&n);
	while(n>=1)
	{
		sinx+=pow(-1,n-1)*pow(x,2*n-1)/jc(2*n-1) ;
		n-=1;
	}
	printf("%.8lf",sinx);
	return 0;
}
