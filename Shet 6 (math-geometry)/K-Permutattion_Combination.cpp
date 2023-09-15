/**
 * @author : Muhammad Osama El-araby
 * @brief  : Prime Factorization of the Number
 * @date   : 12/9/2023
 *
 */

#include <bits/stdc++.h>
using namespace std ;
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
long long factorial (int num)
{
    long long res =1 ;
    for (int i = 1 ; i<=num ; i++ )
    {
        res *= i ;
    }
    return res ;
}
int main ()
{
long long  num1 , num1_fact , num2 , num2_fact ;
cin >> num1 >> num2 ;
num1_fact= factorial(num1) ;
num2_fact = factorial(num2) ;
cout << ( (num1_fact)/(factorial(abs(num1-num2)) ) / num2_fact ) << " " << ((num1_fact)/(factorial(abs(num1-num2)) ) );
    return 0 ;
}
