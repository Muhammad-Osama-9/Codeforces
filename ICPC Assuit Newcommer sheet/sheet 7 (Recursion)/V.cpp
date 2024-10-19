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

#define s_arr(name_arr) (sof(name_arr) / sof(name_arr[0]))
#define ll long long

int res;
int s;
long long neg_limit = 0, pos_limit = 0;
void solve(vector<int> &arr, long long sum, int index)
{

    // if (sum < neg_limit || sum > pos_limit)
    // {
    //     return;
    // }
    if (index >= s)
    {
        if (sum == res)
        {

            cout << "YES";
            exit(0);
        }
        return;
    }
    solve(arr, sum + arr[index], index + 1);
    solve(arr, sum - arr[index], index + 1);
}
int main()
{
    Muhammad();

    cin >> s >> res;

    vector<int> arr(s);

    for (auto &i : arr)
    {
        cin >> i;
        neg_limit -= (abs(i));
        pos_limit += (abs(i));
    }

    solve(arr, arr[0], 1);
    cout << "NO";

    return 0;
}