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

#define s_coins(name_coins) (sof(name_coins) / sof(name_coins[0]))
#define ll long long

long long maxl(long long a, long long b)
{
    if (a > b)
        return a;
    else
        return b;
}

#define get_bit(bit, pos) ((bit >> pos) & 1LL)
#define set_bit(bit, pos) (bit |= (1LL << pos))
#define clear_bit(bit, pos) ((bit &= (~(1LL << pos))))
#define tog_bit(bit, pos) ((bit ^= (1LL << pos)))
#define cin(arr)        \
    for (auto &i : arr) \
    cin >> i
struct dsu
{
    vector<int> p, sz;
    int n;
    dsu(int _n) : n(_n)
    {
        p.resize(n + 1);
        iota(p.begin(), p.end(), 0);
        sz.assign(n + 1, 1);
    }
    int find(int v)
    {
        return p[v] == v ? v : p[v] = find(p[v]);
    }
    bool join(int a, int b)
    {
        a = find(a), b = find(b);
        if (a == b)
            return 0;
        if (sz[a] < sz[b])
            swap(a, b);
        p[b] = a;
    }
};
const int N = 1e2 + 5;
vector<int> adj_matrix[N];
bool visited[N];
void dfs(int node)
{
    visited[node] = true;
    int res = 0;
    for (int child : adj_matrix[node])
    {
        if (visited[child])
        {
            continue;
        }
        dfs(child);
    }
}

long long minl(long long a, long long b)
{
    if (a > b)
        return b;
    else
        return a;
}
int coins[7];
int s, res;
string ans;
long long solve(int index, long long sum)
{
    if (sum == res)
    {

        return 1;
    }

    if (sum > res || index >= s)
    {

        return 0;
    }

    ll result = 0;

    result += solve(index + 1, sum);
    // result += solve(index + 1, sum * coins[index + 1] + coins[index + 1]);
    result += solve(index, sum * coins[index] + coins[index]);

    return result;
}

char asciitolower(char in)
{
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

int main()
{
    Muhammad();

    int freqs[130] = {0};
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != ' ')
            freqs[s1[i]]++;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != ' ')
            freqs[s2[i]]--;
    }

    for (int i = 0; i < 130; i++)
    {
        if (freqs[i] < 0)
            return (cout << "NO", 0);
    }
    cout << "YES";
    return 0;
}