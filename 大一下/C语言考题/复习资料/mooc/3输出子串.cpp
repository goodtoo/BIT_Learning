#include <stdio.h>

#include <stdlib.h>

#include <string.h>

 

#define MAXCHAR 5000 //最长处理5000个字符

 

char c[MAXCHAR], *a[MAXCHAR];

int comlen( char *p, char *q )

{

     int i = 0;

     while( *p && (*p++ == *q++) )

         ++i;

     return i;

}

 

int pstrcmp( const void *p1, const void *p2 )

{

     return strcmp( *(char* const *)p1, *(char* const*)p2 );

}

 

int main(  )

{

     char ch;

     int  n=0;

     int  i, temp;

     int  maxlen=0, maxi=0;

     //printf("Please input your string:\n");

     while( (ch=getchar())!='\n' )

{

         a[n]=&c[n];

         c[n++]=ch;

     }

     c[n]='\0';

     

qsort( a, n, sizeof(char*), pstrcmp );

     

for(i=0; i<n-1; ++i )

{

         temp=comlen( a[i], a[i+1] );

         if( temp>maxlen )

{

             maxlen=temp;

             maxi=i;

         }

     }

     if(maxi==0)

     printf("No output");

     printf("%.*s\n",maxlen, a[maxi]);

     //system("PAUSE");

     return 0;

 }
