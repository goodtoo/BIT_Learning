#include<stdio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		for(j=1;j<i;j++)
		printf(" ");
	    printf("*");
		if(i==1)
		{
			for(int k=1;k<=2*h-2;k++)
			printf("*");
			printf("\n");
		}
		else
		{
			if(i<h)
		    {
		    	for(int m=1;m<=2*(h-i)-1;m++)
		        printf(" ");
		        printf("*");
			}
			printf("\n");
		}
		
	}
}
