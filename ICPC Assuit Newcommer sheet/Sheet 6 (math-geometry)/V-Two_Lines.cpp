/**
 * @author : Muhammad Osama Elarby 
 * @date   : 17/2/2024 
 * @brief  : Problem V Two lines
 * @htmlonly : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V
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

long long x_1 ;
long long y_1 ;
long long x_2 ;
long long y_2 ;

}point_t;


/* Main Function  */
int main ()
{
    Muhammad() ; 

    /* Define Points  */
    point_t first_line , second_line  ; 

  
  

    /*----- Taking inputs first line  ------  */
    cin >> first_line.x_1 >>first_line.y_1 >>first_line.x_2>> first_line.y_2;
    
    /*----- Taking inputs second  line  ------  */
    cin >> second_line.x_1 >>second_line.y_1 >>second_line.x_2>> second_line.y_2;
    
    long long delt_x_first =  (first_line.x_2-first_line.x_1)  ; 
    long long delt_y_first =  (first_line.y_2  - first_line.y_1); 
    long long delt_x_second = (second_line.x_2-second_line.x_1) ; 
    long long delt_y_second = (second_line.y_2  - second_line.y_1); 
    
    /* comparing 2-slopes with taking care of devsion in Zeros   */
    long long line_1_equations  = delt_y_first * delt_x_second   ;   

    long long  line_2_equations  = delt_y_second * delt_x_first ;  

if (line_1_equations == line_2_equations)
{
    cout << "YES" ; 
}
else {
    cout << "NO" ; 
}

 
 return 0 ;  
}
