#include<stdio.h>

int leap(int n)
{
    if(n%4==0)
        if(n%400==0)
            return 0;
        else
            return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(leap(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
