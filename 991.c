#include<stdio.h>
int main()
{
	char grade;
	scanf("%c",&grade);
	printf(" ÕÅ×Óî£µõ³¤:");
	switch(grade)
	{
		case'A':printf("85~100\n");break;
		case'B':printf("70~84\n");break;
		case'C':printf("1~69\n");break;
		case'Z':printf("0~1\n");break;
		default:printf("enter data error!\n"); 
	}
	return 0;
}

