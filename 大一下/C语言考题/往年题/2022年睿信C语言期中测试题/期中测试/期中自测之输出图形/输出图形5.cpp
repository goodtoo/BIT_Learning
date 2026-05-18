//输出X形（1-9） 
#include<stdio.h>
int main()
{
	int n,i,j,m=1,k,a=1;
	scanf("%d",&n);
	if(n<1||n>9)
	printf("input error\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i-1;j++)
			printf(" ");
            printf("%d",m);
            if(i!=n)
            {
            	for(k=1;k<=2*n-3-2*(i-1);k++)   //**同T4第29行 
			    printf(" ");
			    printf("%d",m++);
			}
			printf("\n");
		}
		for(i=n+1;i<=2*n-1;i++)
		{
			if(m>=9)
			m=m%9;                        //控制1-9循环，比较凑巧的方法（下面有++m） 
			for(j=1;j<=2*n-i-1;j++)
			printf(" ");
			printf("%d",++m);
			for(k=1;k<=1+2*(i-n-1);k++)
			printf(" ");
			printf("%d\n",m);
		}
	}
	return 0;
 }
