#include<stdio.h>
int main()
{
	int n,c,i,j;
	scanf("%d %c",&n,&c);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1)
			printf("%c",(c-'A'+26*n+j-1)%26+'A');
			else if(i+j==n+1)
			printf("%c",(c-'A'+26*n+n+i-2)%26+'A');
			else if(i==n)
			printf("%c",(c-'A'+26*n+2*(n-1)+j-1)%26+'A');
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
