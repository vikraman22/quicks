#include <iostream>
using namespace std;
int hcf_func(int a, int b)
{
    int quo, rem;
    rem = a % b;
    if(rem == 0)
        return b;
    else
        return hcf_func(b, rem);
}


int main(){
   int a, b, c;
   cin >> a >> b;
   c = hcf_func(a, b);
   cout << c;
   return 0;

}
