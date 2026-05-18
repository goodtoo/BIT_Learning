#include <stdio.h> 

int main(void) 

{ 

    int a, b, c[10]; 

    int i, j, t, s, f = 0; 

    

    scanf("%d%d", &a, &b); 

    for(i=a;i<=b;i++) 

    { 

        s = 0; 

        t = i; 

        for(j=0;t;j++) 

        { 

            c[j]=t%10; 

            s+=c[j]; 

            t/=10; 

        } 

        for(j--;j>=0;j--) 

        { 

            if(s == c[j]*2) 

            { 

                printf("%d\n", i); 

                f = 1; 

                break; 

            } 

        } 

    } 

    

    if(f == 0) 

        printf("No output"); 

    

    return 0; 

}
