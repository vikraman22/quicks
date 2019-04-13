#include <stdio.h>
int check(int arr[], int n)
{
    int i;
    int k = 1;
        for(i = 0; i < n; i++)
        {
           if(arr[i] == k)
          {
              break;
              return 1;
          }

        }
}







void main()
{
    int i, n, arr[100], l;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    l = check(arr, n);
    if(l == 1)
        printf("HARD");
    else
        printf("EASY");

}
