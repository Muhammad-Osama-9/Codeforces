/**
 * @author : Muhammad Osama El-araby
 * @brief  : See if the Number Power of 2 or Not 
 * @date   : 8/2/2023
 *
 */
#include <bits/stdc++.h>
#include <cmath>

using namespace std ;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");
  int main ()
  {
      unsigned  long long num ;
      cin >> num ;
    /* floor function approximates the double varibale to the lowest Unit */
      if (log2l(num) == floor(log2l(num)))
      {
          cout << "YES" ;
      }
      else {
          cout << "NO" ;
      }

    return 0 ;

}
