#include<stdio.h>
int main()
{
	int sum,i,j,m,n,a,b,c,d;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	scanf("%d",&sum);
	for(i=1;i<=sum/a;i++)
	{
		for(j=i;j<=sum/b;j++)
		{
			for(m=j;m<=sum/c;m++)
			{
				for(n=m;n<=sum/d;n++)
				{
					if(a*i+b*j+c*m+d*n==sum)
					{
						printf("%d,%d,%d,%d\n",i,j,m,n);
					}
				}
			}
		}
	}
} 
