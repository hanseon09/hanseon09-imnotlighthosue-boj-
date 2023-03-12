#include <iostream>
using namespace std;

int main(void)
{
    int  n, k, i;
    int sum = 0;
    cin >> n >> k;
   {
        sum += i;
   }
      n -= sum;
 
   if (n < 0) {  //2)
      cout << -1;
   }
   else {
      if (n % k == 0)  //3)
         cout << k - 1;
      else if (n % k != 0)  //4)
         cout << k;
   }
}