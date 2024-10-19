#include <iostream>
using namespace std;

#define ll long long
#define tr "YES"
#define f "NO"
int main(void)
{
    ll num1, num2, num3, result;
    cin >> num1 >> num2 >> num3 >> result;

    if (num1 + num2 * num3 == result)
        cout << tr;
    else if (num1 * num2 + num3 == result)
        cout << tr;
    else if (num1 * num2 - num3 == result)
        cout << tr;
    else if (num1 - num2 * num3 == result)
        cout << tr;
    else if (num1 + num2 - num3 == result)
        cout << tr;
    else if (num1 - num2 + num3 == result)
        cout << tr;
    else
    {
        cout << f;
    }
    return 0;
}