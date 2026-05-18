#include<stdio.h>
int main()
{
	double x1,y1,x2,y2;
	int i,n,flag=0,a[100],b[100];
	scanf("%lf,%lf\n%lf,%lf\n%d\n",&x1,&y1,&x2,&y2,&n);
	for(i=0;i<n;i++)
	scanf("%d,%d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
		if((b[i]-y1)*(x2-x1)==(y2-y1)*(a[i]-x1))  //除法有限制，改用乘法 
		{
			printf("%d,%d\n",a[i],b[i]);
			flag++;
		}
	}
	if(flag==0)
	printf("NoOut.\n");
	return 0;
 } 


