#include <stdio.h>
#include <string.h>
int main()
{
    char ar[102];
    int i;
    fgets(ar, sizeof(ar), stdin);

    for(i=0; i<strlen(ar)-1; i++)
    {
        if(ar[i]>='A' && ar[i] <= 'Z')
        {
            ar[i] +=32;
        }
        if(! (ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u' || ar[i]=='y'))
        {
            printf(".%c", ar[i]);
        }
    }

    return 0;
}
