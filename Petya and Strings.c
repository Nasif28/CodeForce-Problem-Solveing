#include <stdio.h>
#include <string.h>
int main()
{
    char ar1[102], ar2[102];
    int i;
    fgets(ar1, sizeof(ar1), stdin);
    fgets(ar2, sizeof(ar2), stdin);

    int len = strlen(ar1)-1;
    for(i=0; i<len; i++)
    {
        if(ar1[i]>='A' && ar1[i]<='Z')
            ar1[i] += 32;
        if(ar2[i]>='A' && ar2[i]<='Z')
            ar2[i] += 32;
    }

    int same = 1;
    for(i=0; i<len; i++)
    {
        if(ar1[i]< ar2[i])
        {
            same = 0;
            printf("-1\n");
            break;
        }
        else if(ar1[i]>ar2[i])
        {
            same = 0;
            printf("1\n");
            break;
        }
    }

    if(same==1)
    {
        printf("0\n");
    }

    return 0;
}
