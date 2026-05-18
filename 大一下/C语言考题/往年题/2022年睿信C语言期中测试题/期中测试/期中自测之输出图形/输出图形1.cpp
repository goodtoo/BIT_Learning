//开口空心正方形 
#include<stdio.h>
int main()
{
	int n,j;
	char a;
	scanf("%d %c",&n,&a);
	if(a%2==1)
	  for(int i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(i==0||i==n-1)
			printf("%c ",a);
			else
			printf("  ");           //不可能凭空出来空格，必须输出 
		}
	 printf("%c \n",a);
	}
	if(a%2==0)
	for(int i=0;i<n;i++)
	{
		int j=0;
		if(j==0)
		printf("%c ",a);
		for(j=1;j<n;j++)
		{
			if(i==0||i==n-1)
			printf("%c ",a);
		}
		printf("\n");
	}
	return 0;
}
