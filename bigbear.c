#include <stdio.h>
int main()
{
    int a, b;
    int k = 1;
    scanf("%d %d", &a, &b);
    if(a <= b)
    {
        while(1)
        {
            a = a * 3;
            b = b * 2;
            if(a > b)
                break;
            k++;

}
printf("%d", k);
}

    if(a == 1 && b == 1)
    {
        return k;
    }
}
