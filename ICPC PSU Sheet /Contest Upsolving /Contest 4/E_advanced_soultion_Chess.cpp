/**
 * @author : Muhammad Osama Elarby
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

/* 
 *  =======================================================
 *                                                        *
 *  ---------------  Soultion Starts here --------------- *     
 *                                                        *
 * ========================================================
*/


#define  UP_LEFT    {-2 , -1} 
#define  UP_RIGHT   {-2 , 1}
#define  DOWN_LEFT  {2 , -1}    
#define  DOWN_RIGHT {2 , 1}  
#define  LEFT_UP    {-1 , -2}  
#define  LEFT_DOWN  {1 , -2} 
#define  RIGHT_UP   {-1 , 2}    
#define  RIGHT_DOWN {1 , 2}
 
   int knight_moves [][2] = {
        UP_LEFT  ,UP_RIGHT ,
        DOWN_LEFT , DOWN_RIGHT ,
        LEFT_UP , LEFT_DOWN 
        , RIGHT_UP , RIGHT_DOWN  };
 
void fill_grid (vector<vector<char>>  &grid , int  i , int j ,int size  , int  n  )
{
    if (i < 0 || i >= size  || j < 0 || j >= size || grid[i][j] != 0 ) return ; 
    if (n%2 ==0 )
    {
        grid[i][j] = 'B' ;
    }
    else {
        grid[i][j] = 'W' ;  
    }
    for (int k = 0 ; k < 8 ; k++)
    {
        fill_grid(grid , i + knight_moves[k][0] , j + knight_moves[k][1] , size  , n+1 ) ;
    }
 
}


int main ()
{

  
  /* -- Comment this line if U not Using [input , ouptut]  txt files  --*/  Muhammad() ;
  
int n ; cin >> n ; 
 
 
 
  vector<vector<char>>  grid (n , vector<char> (n , 0 )  ) ; 
 
    fill_grid(grid , 0 , 0 , n  , 0 ) ;
 
for (int i = 0 ; i < n ; i++)
{
    for (int j = 0 ; j < n ; j++)
    {
        cout << grid[i][j] ;
    }
    cout << "\n" ; 
}
  
  return 0 ; 
}
