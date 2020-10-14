#include <stdio.h>

int main(void)
{
    int t;
    int n,rem;
    int sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("%d\n",sum);
        sum=0;
        
    }
	
	return 0;
}

