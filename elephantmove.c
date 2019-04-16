#include <stdio.h>
int find(int arr[], int n)
{
    int i, m;
    int k = 1, p;
    for(i = 0; i < 5; i++)
    {

        if(arr[i] == n)
        {
            return k;
        }
        else if(n > arr[4])
        {
            if(n % 5 == 0)
            {
              m = n / 5;
            }
            else
            {
                m = n /5 + 1;
            }
            return m;
        }
    }

}

int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[5] = {1,2,3,4,5};
    a = find(arr, n);
    printf("%d", a);
}
