#include<stdio.h>
int main()
{
	int m,n,a,b,x;
	scanf("%d %d",&m,&n);
	for(x=1;x<m;x++)
    {
    	for(a=1;a<=m/2*x;a++)
	    {
		    for(b=a;b<=m/(int)(1.5*x);b++)
	    	{
			    if(a*x*2+b*(int)(x*1.5)+(n-a-b)*x==m&&n-a-b>b&&a<b)
				printf("Price=%d, A=%d, B=%d, C=%d\n",x,a,b,n-a-b);
		    }
    	} 	
	}
	return 0;
} 
