/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

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

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long *max_ref(long long *a, long long *b)
{
    if (*a > *b)
        return a;
    return b;
}
long long *min_ref(long long *a, long long *b)
{
    if (*a > *b)
        return a;
    return b;
}

/* User defined data types  */

typedef struct
{

    long long x_1;
    long long y_1;
    long long x_2;
    long long y_2;

} point_t;

typedef struct
{

    double x;
    double y;

} center_t;

void swap(long long *x, long long *y)
{
    long long temp = *x;
    *x = *y;
    *y = temp;
}

// wirte funtion to check if the string is palindrome or not
bool is_palindrome__(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    Muhammad();

    int size, k;
    cin >> size >> k;
    vector<int> freqs(26, 0);
    vector<int> freqs_remove(26, 0);
    string s;
    cin >> s;
    for (int i = 0; i < size; i++)
    {
        freqs[s[i] - 'a']++;
    }
    for (int i = 0; i < 26 && k > 0; i++)
    {
        freqs_remove[i] = freqs[i];
        k -= freqs[i];

        freqs[i] = (k >= 0 ? 0 : abs(k));
        freqs_remove[i] -= freqs[i];

        k = max(0, k);
    }
    for (auto i : s)
    {
        if (freqs_remove[i - 'a'] > 0)
        {

            freqs_remove[i - 'a']--;
        }
        else
        {
            cout << i;
        }
    }
}