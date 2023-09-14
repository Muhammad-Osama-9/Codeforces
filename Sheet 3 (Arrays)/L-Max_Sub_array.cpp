#include <iostream>

using namespace std ;
int main()
{
    int test ;
    cin >> test  ;
    while (test -- )
    {
        int size ;
        cin >> size ;
        int arr[size] ;
        for (int i = 0 ; i < size  ; i ++ )
        {

            cin >> arr[i] ;
        }
        int max ;

    for (int l = 0 ; l < size ; l ++ )
    {
         for (int i = l ; i < size   ; i ++ )
        {
        max = INT_MIN ;
       for (int j = l ; j <= i ; j++) // sub array
       {
            if (arr[j]> max )
            {

                max = arr[j] ;
            }

       }
       cout << max << " " ;
    }
    }


cout << "\n" ;

    }

 return 0 ;
}
