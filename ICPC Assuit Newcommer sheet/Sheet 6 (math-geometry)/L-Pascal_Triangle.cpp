/**
 * @author : Muhammad Osama El-araby
 * @brief  : Pascal Triangle
 * @date   : 12/9/2023
 *
 */

#include <bits/stdc++.h>
using namespace std ;
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
/*in all Functions  i pass Vector by Reference  */
void  calculate_prefix (vector<long long> *vec  ,vector<long long> *prefix )
{
    prefix->clear() ;
    long long sum = 0 ;
    long long  counter  = 0    ;
    
    /* calculate the prefix sum of 2 consecutive Numbers by two Pointers Method */
    
    for (auto it = vec->begin()  , it2 = vec->begin(); it!=vec->end() ;it++)
    {
        sum += *it ;

            if (counter  >= 2 )
            {
                sum -= *it2 ;
                it2++ ;
            }
        prefix->push_back(sum) ;

        counter ++ ;
    }

}
void change_num (vector<long long> *vec  ,vector<long long> *prefix )
{
    vec->clear() ;
    
    for (auto it = prefix->begin() ; it!=prefix->end() ;it++)
    {
        vec->push_back( *it) ;

    }
    /* Adding 1 to end to Complete the Pascal Triangle  */
    vec->push_back(1) ;
}
/* Function used to Print Vector */
void print_vec (vector <long long> *vec  )
{
    for (auto it = vec->begin() ; it!= vec->end() ;it++ )
    {
        cout << *it << " " ;
    }
}
int main ()
{
int num  ;cin >> num ;
vector<long long > nums (1 , 0) ;
vector<long long > prefix (num , 0) ;
nums[0] =1 ;


for (int i = 0 ; i < num ; i++ )
{
    calculate_prefix( &nums ,  &prefix ) ;
    print_vec(&nums) ;
    change_num( &nums ,  &prefix ) ;

    cout << '\n' ;
}


    return 0 ;
}
