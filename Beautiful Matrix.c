#include <stdio.h>
int main()
{
    int i, j, temp, x, y;
    int arr[5][5];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int ans, row, col;
    if(x>2)
        row = (x-2);
    else
        row = (2-x);

    if(y>2)
        col = (y-2);
    else
        col = (2-y);

    ans = row + col;
    printf("%d\n", ans);
    return 0;
}
