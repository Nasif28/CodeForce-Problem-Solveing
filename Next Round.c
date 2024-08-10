#include<stdio.h>
int main()
{
    int n, k, i, arr[55];

    scanf("%d %d", &n, &k);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans=0;
    for(i=1; i<=n; i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
            ans++;
    }

    printf("%d\n",ans);
    return 0;
}
