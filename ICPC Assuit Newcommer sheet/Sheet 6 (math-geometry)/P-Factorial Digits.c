/**
 *  @author : Muhammad Osama Elaraby
 *  @brief  : Problem P Factorial Digits
 *  @date   : 7/10/2023
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    /* variable declaration */
int n ;
double  result = 0  ;

cin >> n ;

/*
 * to know the size of n! use this formula
 * log(n!) = log ((n)*(n-1)*(n-2)....(1))
 * log ((n)*(n-1)*(n-2)....(1))  =  log(n)+log(n-1) .....log(1)
 * */

for (int i = 1 ; i <= n ; i++ )
{
    /*
     * applying log(n)+log(n-1) .....log(1)  Formula
     * */
    result += log10(i) ;
}

cout <<"Number of digits of "<< n<< "! " << "is " <<floor(result) + 1 ;

    return 0;
}
