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




int main ()
{

  
  /* -- Comment this line if U not Using [input , ouptut]  txt files  --*/  Muhammad() ;

  

 int k ;
 cin >> k ; 
 int num_of_playing = 987654321  / k  ; 
if (num_of_playing %2 == 0  )
{
    cout << "Mohammed is the star of the week" ;
}
else {
    cout << "Youssef is the star of the week" ; 
}


    return 0 ;  

}
 
