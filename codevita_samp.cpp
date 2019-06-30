#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long  int n, i, j=1, k, count;
    
    cin >> n;
    long long int *arr = (long long int*)malloc(sqrt(n) * sizeof(long long int));
    for(i = 2; i <= sqrt(n); i++)
    {
      if(n % i == 0)
      {
          *(arr+j) = i;
          j++;
          
      }
    }
     
    k = j; 
    
       for(j = 1; j <= k; j++ )
      { 
          if (sqrt(*(arr+j)) );
          count++;

      }
      count++;
    
     
     
    
    
    return 0;
}
