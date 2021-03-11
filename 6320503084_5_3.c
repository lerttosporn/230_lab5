#include<stdio.h>
int main ()
{
    int n,i=0,x=2,y=0;
    scanf("%d",&n);
    int ar[n];
    ar[0]=1;
    for(i=1; i<n; i++)
    {
        if(x%2==0||x%3==0|x%5==0)
        {
            ar[i]=x;
        }
        else
        {
            i--;
        }
        x++;
    }
    printf("%d",ar[n]);
    return 0;
}
