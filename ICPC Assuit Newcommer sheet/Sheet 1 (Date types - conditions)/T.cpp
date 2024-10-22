#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num1, num2, num3;
    long long maxx, minn, midd = INT_MIN;
    cin >> num1 >> num2 >> num3;

    maxx = max(num1, max(num2, num3));
    minn = min(num1, min(num2, num3));

    midd = num1 + num2 + num3 - maxx - minn;

    cout << minn << "\n"
         << midd << "\n"
         << maxx << "\n"
         << "\n";
    cout << num1 << "\n"
         << num2 << "\n"
         << num3;

    return 0;
}
