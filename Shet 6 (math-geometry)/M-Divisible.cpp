/**
 * @author : Muhammad Osama El-araby
 * @brief  : Divisible
 * @date   : 12/9/2023
 *
 */

#include <bits/stdc++.h>
using namespace std ;
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

int main ()
{
  /*Take input number in string due to its size */
string input ; long long num ; cin >> input >> num ;
long long answer = 0 ;
  
for (long long  i = 0 ; i<input.size () ; i ++  )
{
  /* Convert string singel char  into  number */
   
    answer+=input[i]-'0' ;
    answer*=10 ;
  
    /*limit the input in acceptable range with No divisible Problem */
    answer %=num ;
}
  
if (answer==0)
{
    cout << "YES" ;
}
else {
    cout << "NO" ;
}
    return 0 ;
}
