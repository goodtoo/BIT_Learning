#include<stdio.h>
int main()
{
	int *p,i,j,count=0,sum[10],a[10],b[10];
	for(i=0;i<7;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	    sum[i]=a[i]+b[i]; 
	}
    for(i=0;i<7;i++)
    {
    	p=sum;
    	count=0;
    	for(j=0;j<7;j++)
    	{
    		if(*p<=sum[i]&&sum[i]>=10)
    		{
    			count++;
			}
			p++;
		}
		if(count==7)
		{
			printf("%d\n",i+1);
			return 0;
		}
	}
	if(count<7)
	printf("0\n");
} 
