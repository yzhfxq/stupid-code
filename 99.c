#include<stdio.h>
int main()
{
	char grade;
	scanf("%c",&grade);
	printf("ÄãµÄ³¤¶È:");
	switch(grade)
	{
		case'A':printf("8.5~10.0\n");break;
		case'B':printf("7.0~8.4\n");break;
		case'C':printf("6.0~6.9\n");break;
		case'D':printf("<6.0\n");break;
		default:printf("enter data error!\n") ;
	 } 
	 return 0;
}
