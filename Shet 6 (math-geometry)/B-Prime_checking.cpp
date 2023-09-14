/**
 * @author : Muhammad Osama El-araby
 * @brief  : Checking if the number is Prime or Not 
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
      unsigned  long long num ,sqr_num;
      cin >> num ;
      int counter = 0 ;

      sqr_num =  (unsigned long long)sqrtl(num) ;
        /*see if the number have divisors between 1 to sqrt(num) */
      for (unsigned long long  i = 1 ; i<=sqr_num ; i++)
      {
          if (num%i==0)
          {
              counter ++ ;
          }
      }
      if (counter > 1 || num == 1 )
      {
          cout << "NO" ;
      }
      else {cout << "YES" ; }
    return 0 ;

}
