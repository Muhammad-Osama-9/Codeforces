/**
 * @author : Muhammad Osama El-araby
 * @brief  : Get the GCD , LCM  from 2 input Numbers taken from user
 * @date   : 12/9/2023
 *
 */

#include <bits/stdc++.h>

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
using namespace  std ;

long long GCD (long long num1, long long num2 ) {
    /* --- Variable Declaration --- */
    long long res = 1, sqrt_num1 = (long long) sqrtl(num1), sqrt_num2 = (long long) sqrtl(num2);
    /* P_Qeue Data structure to make input data  sorted from descending Order   */
    priority_queue<long long> num1_div, num2_div;

/*********************************************************************************/



/*------- Get all Divisor of 2-input Numbers in Complexity O(sqrt(n) ) -------*/
    for (long long i = 1; i <= sqrt_num1; i++) {

        if (num1 % i == 0) {

            num1_div.push(num1 / i);
            num1_div.push(i);
        }
    }
    for (long long i = 1; i <= sqrt_num2; i++) {
        if (num2 % i == 0) {

            num2_div.push(num2 / i);
            num2_div.push(i);
        }

    }

/*  Get the GCD from all divisors in the 2 p_qeue   */
while (!num1_div.empty() && !num2_div.empty() )
{

    if (num1_div.top() ==num2_div.top() )
    {
        res = num1_div.top() ;
        break  ;
    }
    else if (num1_div.top() > num2_div.top() )
    {
        num1_div.pop();
    }
    else if (num1_div.top() < num2_div.top() )
    {
        num2_div.pop();
    }
}

    return res ;

}



int main ()
{
long long num1 , num2 ;
cin >> num1 >> num2 ;
long long res = GCD(num1,num2);
/*
 * LCM formula =  (num2 / gcd  * num1 )
 * */
cout <<  res <<" " << (num2/res * num1 ) ;
    return 0 ;
}
