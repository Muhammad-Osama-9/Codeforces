/**
 *  @author : Muhammad Osama Elaraby
 *  @brief  : Problem L  Sereja and Dima
 *  @date   : 29/10/2023
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

int number_of_cards  ;
cin >> number_of_cards ;
int cards [number_of_cards] ;
for (int i = 0 ; i < number_of_cards ; i ++ )
{
    cin >> cards[i] ;
}
int sereeja_score = 0 , dima_score  = 0  , best_val ;
for (int left = 0 , right = number_of_cards -1 , counter = 0  ; counter<number_of_cards   ;counter ++  )
{
    if (counter %2 == 0 )
    {

        if (cards[left] > cards[right] )
         {
            best_val = cards[left] ;
            left++ ;
         }
        else {
            best_val = cards[right ] ;
            right-- ;
        }

        sereeja_score +=  best_val ;

    }
    else {
        if (cards[left] > cards[right] )
        {
            best_val = cards[left] ;
            left++ ;
        }
        else {
            best_val = cards[right ] ;
            right-- ;
        }
        dima_score +=  best_val ;

    }
}
cout << sereeja_score << "\n" << dima_score ;

    return 0;
}
