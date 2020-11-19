#include<stdio.h>
#include<math.h>
int s[1000000];
int main()
{
    int T;
    scanf("%d",&T);
   int N;
   int i,j;
   int sum=0;
   while(T!=0)
   {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&s[i]);
        }
        for(j=0;j<N-1;j++)
        {
            if(s[j]!=s[j+1])
            {
                sum=abs(s[j]-s[j+1])-1+sum;
            }
            else
            {
                return;
            }
        }
        printf("%d\n",sum);
        sum=0;
        T--;
   }
    return 0;
}
