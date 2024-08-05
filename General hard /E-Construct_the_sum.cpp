/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
#include <windows.h>

using namespace std;

#define ll long long
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
/* section : Macros */

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define MASK (~(1 << 31))

/
// #define ONLINE_JUDGE

inline void Muhammad(void)
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);
}

/* section : Main */

int main()
{
    Muhammad();
    int test;
    cin >> test;
    while (test--)
    {
        long long n, s;
        cin >> n >> s;
        
        /*  the same as frequency array  ^_^   */
        unordered_map<long long, long long> hash_map;
        
        long long res = 0, length_numbers = 0;
        
        bool flag_res = false;
        for (int i = 1; i <= n; i++)
        {
            res += i;
            hash_map[i]++;
            length_numbers++;
            if (res == s)
            {
                flag_res = true;
                break;
            }
            else if (res > s)
            {
                hash_map[res - s]--;
                length_numbers--;
                flag_res = true;
                break;
            }
        }
        if (flag_res)
        {
            cout << length_numbers << " ";
            int count = 0;
            for (auto i : hash_map)
            {
                if (i.second == 1)
                {
                    cout << i.first;

                    if (count < length_numbers - 1)
                    {
                        cout << " ";
                    }
                    count++;
                }
            }
        }
        else
        {
            cout << -1;
        }

        cout << "\n";
    }
}
