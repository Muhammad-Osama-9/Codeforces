#include <bits/stdc++.h>
using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void recursion(vector<long long> vec, int index)
{
    if (index == vec.size())
    {
        return;
    }
    else if (index % 2 == 0)
    {

        recursion(vec, index + 1);
        cout << vec[index] << " ";
        return;
    }

    recursion(vec, index + 1);
}
int main()
{
    Muhammad_Osama long long n;
    cin >> n;
    vector<long long> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    recursion(input, 0);
    return 0;
}