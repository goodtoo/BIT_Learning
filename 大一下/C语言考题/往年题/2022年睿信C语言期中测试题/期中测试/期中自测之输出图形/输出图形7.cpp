#include<stdio.h>
int main()
{
	int n,i,j;
	char a,b,c,m;
	scanf("%d %c",&n,&a);
	if(a<97&&a>90)
	printf("Input error!\n");
	else if(n%2==0||a<65||a>122)
	printf("Input error!\n");
	else                                 
	{
		if(a>96&&a<123)
	    a=a-32;
	    if(a>64&&a<91)                     //注意else if和if 不一样，这里不能用else if，否则小写就转不了大写 
	   { 
	    if(n==1)
	    printf("%c\n",a);
	    else                          
	    {
	    	a=(a-'A')%26+'A';
	        b=a;
		    for(i=1;i<=n;i++)
	   	   {
			m=a+i-1; 
			m=(m-'A')%26+'A';
			for(j=1;j<=n;j++)
			{
				if(i==1)
				{
					printf("%c",b++);
					c=b-1;
				    b=(b-'A')%26+'A';
				}
				if(i>1&&i<n&&j<n)             //规律找错了，中间行是一共只输出3个字符，首、尾、中心 
				{
					if(j==1)
					printf("%c",m);
					if(j>1&&j<(n+1)/2)
					{
						printf(" ");
						m++;
					}
					if(j==(n+1)/2)
					{
						m++;
						m=(m-'A')%26+'A';
						printf("%c",m);
					}
					if(j>(n+1)/2&&j<n)
					printf(" ");
				}
				if(i>1&&i<n&&j==n)
				{
					printf("%c",b++);
					b=(b-'A')%26+'A';
				}
			    if(i==n)
				{
					printf("%c",c++);
					c=(c-'A')%26+'A';
				}
			}
			printf("\n");
		  }
		} 
	}
	}
	return 0;
}
