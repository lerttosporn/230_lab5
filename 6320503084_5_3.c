#include<stdio.h>
int main ()
{
    int n,i,j=0,x,y=0;
    scanf("%d",&n);
    int ar[3]= {2,3,5},z;
    for(i=1;j<n; i++)
    {
        x=i;
        while(y!=3)
        {
            if(x%ar[y]==0)
            {
                x=x/ar[y];
            }
            else
            {
                y++;
            }
        }
        y=0;
        if(x==1)
        {
            z=i;
            j++;
        }
    }
    printf("%d",z);
    return 0;
}
