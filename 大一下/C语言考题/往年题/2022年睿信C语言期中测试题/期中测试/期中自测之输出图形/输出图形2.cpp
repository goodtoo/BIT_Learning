//字符波浪 
#include<stdio.h>
int main()
{
	int n;
	char a;
	scanf("%c %d",&a,&n);
	int i,j,count=0;          //开了个循环变量count
    while(1)                  
	{
		for(i=1;i<=n;i++)
	   {
	    for(j=1;j<=i-1;j++)  //正着的n行，每行i-1个空格 
		printf(" ");
		printf("%c",a); 
		printf("\n"); 
	}
	count++;                 //每经历一个循环（正or倒）count+1直到count=n停止 
	if(count==n)
	break;
	    for(i=n+1;i<=2*n;i++)
	   {
		for(j=1;j<=2*n-i;j++) //倒着的n行，每行2n-i个空格 
		printf(" ");
		printf("%c",a); 
		printf("\n"); 
	}
	count++;
	if(count==n)
	break;
    }
	return 0;
}
