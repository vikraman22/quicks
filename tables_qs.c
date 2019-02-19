#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int j, pivot, i;
    pivot = arr[high];
    i = low - 1;
    for( j = low; j < high; j++)
    {
        if(arr[j] > pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
     swap(&arr[i + 1], &arr[high]);
     return i+1;
}

void  quicks(int arr[], int low,int high)
{
	int pi;
    if(low < high)
    {
        pi = partition(arr, low, high);
        quicks(arr, low, pi-1);
        quicks(arr, pi+1, high);
    }

}


int main()
{
    int n, k, s, t, u, arr[10], sum=0, c=0,q;
    scanf("%d %d %d", &n, &k, &s);
    for(t = 0; t < n; t++)
    {
        scanf(" %d", &arr[t]);
    }
     q = k * s;
    quicks(arr, 0, n-1);
    for(u = 0; u < n; u++)
    {
        c++;
        sum += arr[u];
        if(sum >= q)
            break;
    }
    printf("%d", c);
    return 0;
}
