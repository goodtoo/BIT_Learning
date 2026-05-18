#include<stdio.h>
int main()
{
	int i,a,count,temp=0;
	scanf("%d",&a);
	printf("%d=",a);
	for(i=2;i<=a;i++)
	{
		count=0;                //用来数i被除了几次，需不需要平方，每次计数前都要初始化为0 
		while(a%i==0)
		{
			a=a/i;
			count++;
		}
		if(count==1)
		{
			if(temp==0)        //开个变量存输出了几次，每次输出之前，如果发现已经输出过了，就在前面加个* 
			{
				printf("%d",i);
				temp++;
			}
			else
			printf("*%d",i);	
		}
		else if(count>1)     //不能用else，不让count=0也会输出 
		{
			if(temp==0)
			{
				printf("%d^%d",i,count);
				temp++;
			}
			else
			printf("*%d^%d",i,count);
		}
	}
	printf("\n");
	 return 0;
}


