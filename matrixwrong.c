#include <stdio.h>
int main()
{
    int arr[5][5];
    int flag;
    int i, j, k, count = 0, m;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
    }
        for(i = 0; i < 5; i++)
        {
        for(j = 0; j < 5; j++)
        {
           if(arr[i][j] == 0)
            {
              count++;
            }

            else if(arr[i][j] == 1)
            {
             flag = 1;
             break;
            }
        }
        if(flag == 1) {break;}
    }

   if(count > 12)
   {
       m = count - 12;
   }

   else if(count < 12)
   {
       m = 12 - count;
       m 
   }

   else if(count == 12)
   {
       m = 0;
   }
printf("%d", m);
}
