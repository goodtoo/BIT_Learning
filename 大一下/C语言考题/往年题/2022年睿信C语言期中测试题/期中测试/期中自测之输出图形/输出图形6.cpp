#include<stdio.h>
int main()
{
	int n,i,j,k;
	char m,a;
	scanf("%d %c",&n,&a);
    m=((a+n-1)-'A')%26+'A';       //左上角第一个数 
	if(n==1)                      //同T3 
	printf("%c\n",a);
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			printf(" ");
			if(i==1)
			{
				for(k=1;k<=n;k++)
			    {
			        printf("%c",(m-'A')%26+'A');   //不能写成m%26！！ 
			        m++;
				}
			}
			if(i<n&&i>1)
			{
				printf("%c",(a+n-i-'A')%26+'A');   //a+n-i指的是每一行第一个数，但有超范围的可能，得取模 
				for(k=1;k<=n+2*(i-2);k++)
				printf(" ");
				printf("%c",(m-'A')%26+'A');
			    m++;
			}
			if(i==n)
		    {
		        for(k=1;k<=3*n-2;k++)              //循环的次数，不是最后一行的最后一个值，所以不加b（原始的a） 
		    	{
		    		printf("%c",(a-'A')%26+'A');
		    	    a++;
				}
			}
			printf("\n");
		}
	}
	return 0; 
 } 
//26个字母循环：(a-'A')%26+'A' 
