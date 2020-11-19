#include<stdio.h>
int a[10000000];
int b[10000000];
int powC(int x)
{
    int rem,sum=0;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        sum=rem+sum;
    }
   return sum;
}

int main()
{
    int i,res1,res2;
    int t,N;
    int c=0,m=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
        }
        for(i=0;i<N;i++)
        {
            res1=powC(a[i]);
            res2=powC(b[i]);
            if(res1>res2)
            {
                c++;
            }
            else if(res2>res1)
            {
                m++;
                
            }
            else
            {
                c++;
                m++;
              
            }
           
        }
        if(c>m)
        {
            printf("0\t%d\n",c);
        }
        else if(m>c)
        {
            printf("1\t%d\n",m);
        }
        else
        {
            printf("2\t%d\n",c);
        }
        c=0;
        m=0;
        t--;
    }
    return 0;

}
