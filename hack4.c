#include<stdio.h>
void main()
{
    int n,i=1;
    scanf("%d",&n);
        while(1)
            {
                n=n-i;
                if(n<=0)
                    {
                        printf("Patlu");
                        break;
                    }

                n=n-(i*2);
                if(n<=0)
                    {
                        printf("Motu");
                        break;
                    }
                    i++;
            }
}