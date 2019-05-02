#include <stdio.h>
int main()
{
    int i, j, n, arr[10][10];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == 0 || j == 0)
            {
                arr[i][j] = 1;
            }

            else if(i > 0 || j > 0)
            {
               arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }





        }
    }

    printf("%d", arr[n-1][n-1]);
    return 0;

}
