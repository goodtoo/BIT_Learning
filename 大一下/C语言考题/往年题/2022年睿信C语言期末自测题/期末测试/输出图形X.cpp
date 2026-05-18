#include<stdio.h>
int main()
{
	int n,i;
	char a;
	scanf("%d %c",&n,&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    a++;
    if(n==1)
	{
		printf("%c\n",a);
		return 0;
	} 
	else{
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		printf(" ");
		if(i==1)
	    for(int k=1;k<=2*(n-1)+1;k++)
		{
			printf("%c",a);
			a=(a+1-'A')%26+'A';
			if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			a++;
		}
		if(i<n&&i>1)
		{
			printf("%c",a);
			a=(a+1-'A')%26+'A';
			if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			a++;
			for(int k=1;k<=2*(n-i)-1;k++)
			printf(" ");
			printf("%c",a);
			a=(a+1-'A')%26+'A';
			if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			a++;
		}
		if(i==n)
		printf("%c",a);
		printf("\n");
	}
	for(i=n+1;i<=2*n-1;i++)
	{
		for(int j=1;j<=2*n-i-1;j++)
		printf(" ");
		if(i!=2*n-1)
		{
			a=(a+1-'A')%26+'A';
			if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			a++;
			printf("%c",a);
			for(int k=1;k<=2*(i-n)-1;k++)
			printf(" ");
			a=(a+1-'A')%26+'A';
			if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			a++;
			printf("%c",a);
		}
		if(i==2*n-1)
		{
			for(int k=1;k<=2*(n-1)+1;k++)
		    {
		       a=(a+1-'A')%26+'A';
			   if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			   a++;
			   printf("%c",a);
		    }
		}
		printf("\n");
	}	
	}
}
