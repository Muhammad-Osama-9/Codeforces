/**
 *  @author : Muhammad Osama Elaraby
 *  @brief  : Problem M  The New Year: Meeting Friends
 *  @date   : 29/10/2023
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {
 /* 
 Minmum distance happens when the the 2 other points travels to middle point 
 */
int max = -1 ,min= 101 ,mid , input ;
/*
Sorting the 3 inputs to git minmum distance 
*/
for (int i = 0 ; i<3 ; i ++ )
{
    cin >> input ;
    mid = input ;
    if (input<=min )
    {
        mid = min ;
        min  = input ;

    }
     if (input>=max)
    {
        mid = max ;
        max = input ;

    }

}
  /* Calculating  Minmum distance */
cout << (max - mid ) + (mid - min) ;
    return 0;
}
