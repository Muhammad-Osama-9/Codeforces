#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";

int main()
{
    Muhammad_Osama long long n, m, k, l, r, move = 0, sum = 0;
    cin >> n >> m >> k;
    vector<long long> vec(n);
    vector<long long> pref_vec(n);
    vector<long long> prefix_sum_vec(n);
    vector<long long> query_vec(3 * m);
    vector<long long> prefix_query(m, 0);
    vector<long long> prefix_sum_query(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < 3 * m; i++)
    {
        cin >> query_vec[i];
    }
    while (k--)
    {
        cin >> l >> r;

        prefix_query[l - 1]++;

        if (r < prefix_query.size())
        {
            prefix_query[r]--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum += prefix_query[i];
        prefix_sum_query[i] = sum;
    }

    prefix_query.clear();
    for (int i = 2, j = 0; i < 3 * m; i += 3)
    {
        query_vec[i] *= prefix_sum_query[j];
        j++;
        l = query_vec[i - 2];
        r = query_vec[i - 1];

        pref_vec[l - 1] += query_vec[i];
        if (r < pref_vec.size())
        {
            pref_vec[r] -= query_vec[i];
        }
    }

    sum = 0;
    prefix_query.clear();
    prefix_sum_query.clear();
    for (int i = 0; i < pref_vec.size(); i++)
    {
        sum += pref_vec[i];
        prefix_sum_vec[i] = sum;
    }
    for (int i = 0; i < pref_vec.size(); i++)
    {
        cout << prefix_sum_vec[i] + vec[i] << " ";
    }

    return 0;
}