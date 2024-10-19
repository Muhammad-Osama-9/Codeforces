#include <bits/stdc++.h>
using namespace std ;
int main (void )
{
    long long eye , mouth  ,  body ;
cin >> eye >> mouth >> body ;

    if (eye ==0 || body == 0 )
        cout << 0 ;
    else if (mouth == 0 )
    {
            cout << (body > (0.5 * eye) ? (eye/2) : body ) ;
    }

    else if (eye < body && eye <mouth)
        {
            cout << eye ;
        }
    else if (body < eye && body <mouth)
        cout << body ;
    else
        {
        eye -= mouth ;
        body -=mouth  ;
        cout << (mouth + ( 0.5 * eye >  body ? (body )  : (eye)/2) )  ;
    }



    return  0 ;
}
