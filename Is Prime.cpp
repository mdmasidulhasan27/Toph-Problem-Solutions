#include <stdio.h>
#include<math.h>

int prime(int n)
{
    if(n==2)
        return 1;
    int i, len = sqrt(n);
    for(i=2; i<=len; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

main ()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
