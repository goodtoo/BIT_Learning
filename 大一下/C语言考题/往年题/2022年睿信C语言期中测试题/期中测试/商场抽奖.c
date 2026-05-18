#include<stdio.h>
int main()
{
	int i,j,k,m,n,a,b,c,d,e,sum,s;
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&sum,&s);
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			for(k=1;k<=s;k++)
			{
				for(m=1;m<=s;m++)
				{
					for(n=1;n<=s;n++)
					{
						if(i+j+k+m+n==s&&i*a+j*b+k*c+m*d+n*e==sum)
						{
							printf("%d,%d,%d,%d,%d\n",i,j,k,m,n);
						}
					}
				}
			}
		}
		
	} 
}
