#include <stdio.h>

int main(void)
{
    int t;
    int n,rem;
    int rev=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        printf("%d\n",rev);
        rev=0;
        
    }
	
	return 0;
}


