/*
Auhtor: Muhammad Osama  -_-
All rights reserved  !
*/
#include <iostream>

using namespace std ;

 int main (void)
 {
 int  num ,f_num,s_num;
   cin >> num;
  f_num =num %10 ;
s_num = num /10;
if (f_num==0 )
{
    cout << "YES" ;
    return 0 ;
}
cout << ((s_num % f_num ==0 ||f_num%s_num  ==0 ) ? "YES" : "NO") ;
      return 0 ;
 }
