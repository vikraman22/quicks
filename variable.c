#include <stdio.h>
int check(int arr[], int n)
{
    int i;
    int k = 1;
    int m = 2;

        if(n == 1)
        {
            if(arr[0] == 0)
            {
                return m;
            }
        }


        for(i = 0; i < n; i++)
        {
        if(arr[i] == 0)
        {
              continue;
              return m;

        }
        else
        {
            return k;
        }

}
}

int main()
{
    int i, n, arr[100], l;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    l = check(arr, n);
    if(l == 1)
    {
         printf("HARD");
    }
    else
        printf("EASY");
    return 0;
}
