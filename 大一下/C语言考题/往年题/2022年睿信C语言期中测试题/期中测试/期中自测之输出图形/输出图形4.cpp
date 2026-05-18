//菱形 
#include<stdio.h>
int main()
{
	int i,j,k,n;
	char a;
	scanf("%c %d",&a,&n);
	for(i=1;i<=n;i++)    //行数 
	{
		for(j=1;j<=n-i;j++)
		printf(" ");                       //最前面的空格 
		if(i==1)
		printf("%c\n",a);
		else
		printf("%c",++a);
		for(k=1;k<=2*(i-1)-1;k++)         //中间的空格 
		{
		   printf(" ");
		}
		if(i!=1)
		printf("%c\n",a);
	}
	//上面是菱形上半部，下面是下半部 
	for(i=n+1;i<=2*n-1;i++)
	{
		for(j=1;j<=i-n;j++)
		printf(" ");
		printf("%c",--a);
		for(k=1;k<=2*n-3-2*(i-n);k++)    //**中间的空格 
		{
		   printf(" ");
		}
		if(i!=2*n-1)
		printf("%c",a);
		printf("\n"); 
	}
	return 0;
 } 
