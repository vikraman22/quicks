#include <stdio.h>
int rep(int n, int k)
{
    while(k > 0)
    {
        if(n % 10 == 0 )
        {
            n = n / 10;
            return rep (n, k - 1);
        }

        else if(n % 10 != 0)
        {
            n = n-1;
            return rep(n, k - 1);
        }
        k--;
    }
    return n;
}

int main()
{
    int n, k, m;
    scanf("%d %d", &n, &k);
    m = rep(n, k);
    printf("%d", m);
}
