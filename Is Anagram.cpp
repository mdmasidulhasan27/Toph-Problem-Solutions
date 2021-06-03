#include <stdio.h>
#include <string.h>
#include<math.h>

void countS(char c[], int *s1d)
{
    int i;
    int len=strlen(c);
    for(i=0; i<len; i++){
        s1d[c[i]-97]++;
    }
}

int yesOrNot(int *s1d, int *s2d)
{
    int i;
    for(i=0; i<26; i++){
        if(s1d[i]!=s2d[i])
            return 0;
    }
    return 1;
}

main ()
{
    int a, i, s1d[26]={}, s2d[26]={};
    char s1[101],s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    countS(s1,s1d);
    countS(s2,s2d);
    if(yesOrNot(s1d,s2d))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
