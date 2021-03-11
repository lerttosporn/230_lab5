#include<stdio.h>
int main()
{
    int n,i,j,x,z,a,u;
    scanf("%d",&n);
        if(n%2==0)
    {
        z=n/2;
        a=n-1;
        u=z;
    }
    else
    {

    z=(n+1)/2;
    a=n;
    u=z-1;
    }

    for(i=0; i<z; i++)
    {
        for(j=0;j<a;j++)
        {
            if(j==z+i-1||j==z-i-1)
            {printf("*");}
            else
            {printf("_");}
        }
        printf("\n");
    }
    for(i=u;i>0;i--)
    {
        for(j=a;j>0;j--)
        {
            if(j==z+i-1||j==z-i+1)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
