/**
 *  @author : Muhammad Osama Elaraby
 *  @brief  : Problem Q Product Digits
 *  @date   : 14/10/2023
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {
int  L,R,M ;
long long  result =1;
cin >> L >>R>>M ;
for (int i = L ; i<= R ; i++)
{
    result *= i ;
    /* make the range between 0-> M  */
    result %= M ;
}
cout << result ;

    return 0;
}
