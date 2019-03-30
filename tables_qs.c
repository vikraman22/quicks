#include <stdio.h>
int binsch();
void main()
{
    int n, m, arr[10], arr1[10], i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d ", &arr[i]);
    scanf("%d", &m);

    for(j = 0; j < m; j++)
    {
        scanf("%d\n", &arr1[j]);
    }

     binsch(arr, 0, n-1, &arr1);

}

int binsch(int arr[], int l, int r, int* arr2[])
{
    int j;
    if(r > l)
    {
        int mid = (l + r) / 2;
        int size = sizeof((int*)arr2)/sizeof((int*)arr2[0]);
        int count = 0;
        for(j = 0; j < size; j++)
         {
             if(arr[mid] == (int*)arr2[j])
             {
                 count++;
                 printf("%d", count);

             }


             else if(arr[mid] > (int*)arr2[j])
                return binsch(arr, l, mid-1, arr2);

             else if(arr[mid] < (int*)arr2[j])
                 return binsch(arr, mid+1, r, arr2);

             else
                printf("NOT PRESENT");

        }
        return 0;
    }

