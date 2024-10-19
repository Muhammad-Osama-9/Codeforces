/**
 * @author : Muhammad Osama Elarby 
 * @date   : 17/2/2024 
 * @brief  : Problem U Cricle Task 
 * @URL    : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
*/


/* section : Includes */
#include <bits/stdc++.h>

using namespace std;


/* section : Macros */

#define Time cerr << "\nTime Taken: "<< (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n" ;

/* section : fucntion Implentaion  */

inline void  Muhammad (void )
{
    #ifndef ONLINE_JUDGE || CODE_BLOCKS 
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #endif

    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    
}

long long gcd (long long a , long long b )
{
    if (b == 0 ) return a ; 
    return gcd(b , a % b ) ; 
}   
long long * max_ref (long long *a , long long *b )
{
    if (*a > *b ) return a ; 
    return b ; 
}
long long * min_ref (long long *a , long long *b )
{
    if (*a > *b ) return a ; 
    return b ; 
}

/* User defined data types  */

typedef struct {

long long x ;
long long y ;

}point_t;


/* Main Function  */
int main ()
{
    Muhammad() ; 

    /* Define Points  */
    point_t center , input  ; 

    /* Define Variables */
    long long raduis , n   ; 

    /* Taking inputs   */
    cin >> center.x >>center.y >>raduis >> n ;

 while (n--)
 {
    cin >> input.x >> input.y ; 

    /* Make quation for Circle to see if it belongs to it or Not  */
    double circle_equation = pow( (input.x-center.x) ,2) + pow( (input.y-center.y) ,2) ;
    

    if ( circle_equation <= raduis*raduis )
    {
        cout << "YES" ; 
    }
    else {
        cout << "NO" ; 
    }
    cout << "\n" ; 
 } 

 
 return 0 ;  
}
