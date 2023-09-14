/**
 * @author : Muhammad Osama El-araby
 * @brief  : Prime Factorization of the Number
 * @date   : 12/9/2023
 *
 */

#include <bits/stdc++.h>
using namespace std ;
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

vector <long long>  sieve(long long  n  ,  vector<bool> isPrime ) {

    vector<long long> res;


    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            res.push_back(i);
        }

    }
    return res;
}
int main ()
{
long long num ; cin >>num ;
    vector<bool> isPrime( num+1  , true);
   vector <long long> primes =  sieve(num , isPrime) ;


   long long  i = 0  ,counter =0 ;
while (num!= 1 )
{
    if (num %primes[i] == 0 )
    {
        counter ++ ;
        num/=primes[i] ;
    }else {
        if (counter != 0 )
            printf("(%lli^%lli)*",primes[i]  , counter) ;

        counter = 0 ;
        i++ ;
    }

}
    printf("(%lli^%lli)",primes[i]  , counter) ;


    return 0 ;
}
