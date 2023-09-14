/**
* @author : Muhammad Osama El-araby
* @brief  : Calculate the summation of number that divisibale by spacecfifc Number 
* @date   : 9/9/2023
*/
#include <bits/stdc++.h>

using namespace std ;
 int main ()
 {
long long input2  , input1 , start , end , div ;
cin >> input1 >> input2 >> div ;

end  = max(input1 , input2 ) ;
start  = min(input1 , input2 ) ;
if (div > end )
{
    cout << 0 ;
}
else {
  /*Adjust the Range of number */
if (start%div != 0 )
    start   = ( div-(start%div) + start) ;

    end   =  (end - (end % div)  ) ;

    /*calculate the sum of Number in new range */
  long long sum = ((end * (end+1) ) / 2 )  -  ( (start - 1 ) * (start ) /2 )  ;
    /*Calculate the summation of numbers Not Nedded */
  long long subtract  = (end+start) * ((end-start)/div)  * (div-1) / 2    ;


  cout << (sum -  subtract) ;
}



return 0 ;
 }
