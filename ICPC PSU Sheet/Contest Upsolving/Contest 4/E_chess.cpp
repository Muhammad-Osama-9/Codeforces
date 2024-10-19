/**
 * @author : Muhammad Osama Elarby
 * @date :

*/


/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;   



/* section : Macros */

#define Time cerr << "\nTime Taken: "<< (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n" ;
#define MASK  (~(1<<31))
/* section : fucntion Implentaion  */

inline void  Muhammad (void )
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #endif

    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);

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


void swap(long long * x, long long * y) {
    long long  temp = *x;
    *x = *y;
    *y = temp;
}


    // wirte funtion to check if the string is palindrome or not
bool is_palindrome__(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}



int  bfs (int s , vector<int> adj[] , bool visited[] )
{
    queue<int> q ;
    q.push(s) ;
    visited[s] = true ;
    while (!q.empty())
    {
        int u = q.front() ;
        q.pop() ;
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true ;
                q.push(v) ;
            }
        }
    }
    return 0 ; 
}

/* 
 *  =======================================================
 *                                                        *
 *  ---------------  Soultion Starts here --------------- *     
 *                                                        *
 * ========================================================
*/

// abbbbbcdef  -> bbb


int main ()
{
    Muhammad() ;
int size_grid  ; 
cin >> size_grid ; 
 char grid [size_grid ] [size_grid] ; 
 
 int counter ;
 
 for (int i = 0 ; i  < size_grid  ; i ++ )
 {
       if (i%2== 0 ) // even 
            {
                counter = 0 ; 
            }
            else {
                counter  = 1 ; 
            }
    for (int j = 0; j < size_grid; j ++ )
    {
         if (counter %2== 0 )
         grid[i][j] = 'W' ; 
         else 
         grid[i][j] = 'B' ;
         counter ++ ; 
 
    }
 }
 for (int i = 0 ; i  < size_grid  ; i ++ )
 {
 
    for (int j = 0; j < size_grid; j ++ )
    {
            cout << grid[i][j] ; 
    }
    cout << "\n" ; 
 }

    
    return 0 ;  

}
 
