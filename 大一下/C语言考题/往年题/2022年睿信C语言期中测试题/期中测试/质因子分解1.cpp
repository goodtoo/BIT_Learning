#include<stdio.h>
int main()
{
	int i,flag=0,a,m,k=0,count[100];
    scanf("%d",&a);
	m=a;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		flag=1;
	}
	if(flag==0)
	printf("%d\n",a);
	if(flag==1)
	{
	   while(a>1)
	   {
	   	for(i=2;i<=a;i++)
	   	{
	   		if(a%i==0)
	   		{
	   			count[k]=i;
	   			break;
			}
	     }
	     a=a/count[k];
	     printf("%d\n",count[k]);
	     k++;
	   }
	}
	
	 return 0;
}

