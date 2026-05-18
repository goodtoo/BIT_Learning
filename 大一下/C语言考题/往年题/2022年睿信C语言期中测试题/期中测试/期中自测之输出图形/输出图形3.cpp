#include<stdio.h>
int main()
{
	int i,j,k,a,n,m,p;
	scanf("%d %d",&n,&a);
	if(n==1)                              //如果只有1行 
	printf("%d\n",a);
	else
	{
	m=(6*n-7+a)%10;                      //第一行第二个数的值（逆时针转一圈） 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		if(i==1)                        //第一行 
		{
			printf("%d",a);
			for(k=1;k<n;k++)
		    {
			   printf("%d",m--);
		       if(m<0)                    //0完了是9，m--变成-1再+10正好变成9 
		       m+=10;
			} 
			m++;
		    printf("\n");
		}
		if(i>1&&i<n)
		{
			a++;                       //如果a=9，下一个是0，10%10=0 
			printf("%d",(a+10)%10);
			for(k=1;k<=n+2*i-4;k++)
			printf(" ");               //空格有等差数列 
			m--; 
			printf("%d\n",(m+10)%10);  //如果m=0，下一个是9，(-1+10)%10=9 
		    a=a%10;                    //如果a=14,则让a=4 
		}
		if(i==n)                       //第n行 
		{                         
			for(k=1;k<=n+2*i-2;k++)
			{
				a++;                   //同上 
			    printf("%d",(a+10)%10);
			} 
			printf("\n");
		}
	 } 
	} 
	
	 return 0; 
 } 
//控制0~9循环，10个数就模10; 1~9循环，9个数就模9 
