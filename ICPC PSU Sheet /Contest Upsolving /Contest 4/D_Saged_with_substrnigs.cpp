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
  
 
    int size_main_string , size_sub_string ;    
    cin >> size_main_string >> size_sub_string ;
    string main_string , sub_string ;
    cin >> main_string >> sub_string ;
 
 while (main_string.find(sub_string) != -1 ) 
 {
    main_string.erase(main_string.find(sub_string) , size_sub_string) ; 
 
 }
 if (main_string.size() == 0 ) cout << "EMPTY!"  ;
 else 
    cout << main_string ;
 
  
  return 0 ; 
}
