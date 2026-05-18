#include<stdio.h>
int main()
{
	int n,i=1,j,a,b,c,flag=0;
	double m;
	scanf("%d%lf",&n,&m); 
	for(a=n;a>=0;a--)
	{
		for(b=n;b>=0;b--)
		{
			for(c=n;c>=0;c--)
			{
				if(a+b+c==n&&10*a+5*b+2.5*c==m)  
				{
					flag=1;
				    printf("%d:%d,%d,%d\n",i++,a,b,c);
				}
			}
		}
	}
	if(flag==0)
	printf("Error!\n");
	return 0;
}
