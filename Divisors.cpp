#include <stdio.h>
#include<math.h>
main ()
{
    int a, i;
    scanf("%d",&a);
    for(i=1; i<=a/2; i++){
        if(a%i==0)
            printf("%d\n",i);
    }
    printf("%d\n",a);
    return 0;
}
