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

int main()
{
    Muhammad();

    int s, k, ans = 0;
    cin >> k >> s;
    for (int x = 0; x <= k; x++) // 3000
    {
        for (int y = 0; y <= k; y++) // 3000
        {
            int z = s - x - y;
            if (z >= 0 && z <= k)
            {
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}
