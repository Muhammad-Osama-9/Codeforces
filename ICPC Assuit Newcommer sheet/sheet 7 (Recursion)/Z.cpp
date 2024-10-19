/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>

using namespace std;

/* section : fucntion Implentaion  */
// #define ONLINE_JUDGE

inline void Muhammad(void)
{
    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
}

#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long
ll n;

void solve(vector<int> &arr, int max_el, int index)
{
    if (index == arr.size())
    {
        exit(0);
    }

    max_el = max(max_el, arr[index]);

    cout << max_el << " ";
    solve(arr, max_el, index + 1);
}
int main()
{
    Muhammad();
    int siz;
    cin >> siz;
    vector<int> arr(siz);
    for (auto &i : arr)
        cin >> i;

    solve(arr, -2e9, 0);

    return 0;
}