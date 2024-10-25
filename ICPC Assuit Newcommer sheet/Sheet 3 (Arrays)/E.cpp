/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

/* section : fucntion Implentaion  */
// #define ONLINE_JUDGE

inline void Muhammad(void)
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
}

#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long

int main()
{
    Muhammad();
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int low = INT32_MAX;
    int low_ind = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < low)
        {
            low = arr[i];
            low_ind = i + 1;
        }
    }
    cout << low << " " << low_ind;
    return 0;
}
