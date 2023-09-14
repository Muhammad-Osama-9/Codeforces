/**
 * @author : Muhammad Osama El-araby
 * @brief  : calculate the sum of number, even , Odd in Special range 
 * @date   : 11/2/2023
 *
 */
#include <bits/stdc++.h>
#include <cmath>

using namespace std ;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");
  int main ()
  {
          /* Variable Decleration */
      unsigned long long num1 , num2  , maxx , minn ,s_all ,s_even ,s_odd ;
     unsigned  long long  num_of_even ;
    
      cin >> num1 >> num2 ;
    
      /*take the inputs and Store them Correctly ion descinding Order */
      maxx = max(num1,num2) ;
      minn = min(num1,num2) ;

        /* Calculate the summation of  all Numbers from 1 to Max Number */
     s_all =( maxx +1 ) * (maxx/2) + (maxx%2) * (maxx/2 + 1 ) ;
    
      /* Calculate the summation of all Numbers from 1 to min-1 and Subtract from  range  (1 to max) */
     s_all -=  (minn ) * ((minn-1)/2) + ((minn-1)%2) * (((minn-1)/2) + 1 ) ;
      cout << s_all ;
      NEW_LINE
      if (maxx %2 != 0 )
      {
          maxx -- ;
      }
      if (minn%2 != 0 )
      {
          minn ++ ;
      }
        num_of_even =  (maxx  - minn ) / 2 ;
        num_of_even ++ ;
    
        /*Calculate the Summation of Even Numbers */
        s_even = (maxx + minn )  * (num_of_even/2) + (num_of_even % 2) * ((maxx+minn)/2) ;
        cout << s_even ;
        NEW_LINE
        /*Calculate the summation of Odd Number */
        s_odd = s_all - s_even ;
        cout << s_odd ;
        return 0 ;

}
