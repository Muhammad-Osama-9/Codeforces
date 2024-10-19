/**
 * @author : Muhammad Osama Elarby 
 * @date   : 17/2/2024 
 * @brief  : Problem W  Circles 
 * @htmlonly : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W
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


typedef struct {

double x ;
double y ;


}center_t;

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
    
   center_t first_circle ={
    .x = (first_line.x_1 +  first_line.x_2 )/2.0   ,
    .y = (first_line.y_1 +  first_line.y_2 )/2.0 
     }; 


    center_t second_circle ={
    .x = (second_line.x_1 +  second_line.x_2 )/2.0   ,
    .y = (second_line.y_1 +  second_line.y_2 )/2.0 
    }; 
 
 double distance_centres = sqrt(pow((second_circle.x - first_circle.x) ,2) + pow((second_circle.y - first_circle.y),2));

 double diameter_c1 = sqrt(pow((first_line.x_1 - first_line.x_2) ,2) + pow((first_line.y_1  - first_line.y_2),2));

 double diameter_c2 = sqrt(pow((second_line.x_1 - second_line.x_2) ,2) + pow((second_line.y_1  - second_line.y_2),2));


diameter_c1 /=2 ; 
diameter_c2/=2 ;

if (distance_centres <= (diameter_c1+diameter_c2))
{
    cout << "YES" ; 
}
else {
    cout << "NO" ; 
}
 return 0 ;  
}
