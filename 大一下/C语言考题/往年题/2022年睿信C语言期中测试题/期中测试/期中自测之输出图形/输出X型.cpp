#include<stdio.h>
int main()
{
	int n;
	char a;
	scanf("%d %c",&n,&a);
	if(a<65||a>90)
	{
	    printf("input error!\n");
	    return 0;
    }
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		printf(" ");
		printf("%c",(a+n-i-'A')%26+'A');
		if(i==n)
		printf("\n");
		else
		{
			for(int k=1;k<=2*(n-i)-1;k++)
			printf(" ");
			printf("%c\n",(a+n-i-'A')%26+'A');
		}
	}
	for(int i=n+1;i<=2*n-1;i++)
	{
		for(int j=1;j<=2*n-i-1;j++)
		printf(" ");
		printf("%c",(a-(i-n)+26*10-'A')%26+'A');
		for(int k=1;k<=2*(i-n)-1;k++)
		printf(" ");
		printf("%c\n",(a-(i-n)+26*10-'A')%26+'A');//被除数不能为负 
	}
}
