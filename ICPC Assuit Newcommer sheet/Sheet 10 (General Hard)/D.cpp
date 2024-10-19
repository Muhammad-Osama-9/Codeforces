/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
/* section : Macros */

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define MASK (~(1 << 31))

/* section : fucntion Implentaion  */

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

int main()
{
    Muhammad();
    string s1, s2;
    cin >> s1 >> s2;

    int __res = 0;
    vector<int> freqs(26, 0);
    bool res = true;
    bool dup_letters = false;
    for (auto i : s1)
    {
        freqs[i - 'a']++;
    }
    for (auto i : freqs)
    {
        if (i > 1)
        {
            dup_letters = true;
        }
    }
    for (auto i : s2)
    {
        freqs[i - 'a']--;
    }
    for (auto i : freqs)
    {
        if (i != 0)
        {
            res = false;
            break;
        }
    }
    for (int i = 0; i < min(s1.size(), s2.size()); i++)
    {
        if (s1[i] != s2[i])
        {
            __res++;
        }
    }
    if (__res <= 2 && res)
    {
        if (s1 == s2 && dup_letters || s1 != s2)
            cout << "YES";
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}