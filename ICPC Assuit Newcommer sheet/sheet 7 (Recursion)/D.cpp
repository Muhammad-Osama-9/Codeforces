#include <bits/stdc++.h>
using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void print(long long num, bool flag)
{

    int printed_var = (int)num % 10;
    // cout << printed_var << " ";
    if (num == 0)
    {
        if (flag == true)
        {
            cout << 0;
        }
        else
        {
        }
        return;
    }
    else
    {

        print((num / 10), false);
        cout << printed_var << " ";
    }
}
int main()
{
    Muhammad_Osama long long input, n;
    cin >> n;
    while (n--)
    {
        cin >> input;
        print(input, true);
        cout << "\n";
    }
    return 0;
}