#include<stdio.h>

int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int BitScore(int n) 
{ 
    int largest = 0; 
    int smallest = 9; 
    int sum=0;
  
    while (n) 
    { 
        int r = n % 10; 
        largest = max(r, largest); 
        smallest = min(r, smallest); 
        n = n / 10; 
    } 
    sum=(largest*11)+(smallest*7);
    if(sum>100)
    {
        sum=sum%100;
    }
    else
    {
        sum=sum;
    }
    return sum;
} 

int main()
{
    int n;
    int a[1000];
    int b[1000];
    int c[1000];
    int d[1000];
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=BitScore(a[i])/10;
    }
    int odd_cnt = 0;
    int even_cnt = 0;

    for (i = 0; i !=n; ++i) 
    {
        if ((i + 1) % 2)
        {  
            c[odd_cnt++] = b[i];
        }
        else 
        {
            d[even_cnt++] = b[i];
        }
    }
    printf("\n");
    int p1=0,p2=0,j;
    for(i=0;i<odd_cnt-1;i++)
    {
        for(j=i+1;j<odd_cnt;j++)
        {
            if(c[i]==c[j])
            {
                p1++;
            }
        }
    }
    printf("%d\n",p1);
    for(i=0;i<even_cnt-1;i++)
    {
        for(j=i+1;j<even_cnt;j++)
        {
            if(d[i]==d[j])
            {
                p2++;
            }
        }
    }
    int x=p1+p2;
    printf("%d\n",x);
}