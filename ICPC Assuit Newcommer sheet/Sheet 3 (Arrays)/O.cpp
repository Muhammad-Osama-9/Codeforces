#include <iostream>
using namespace std;
long long fib(int n)
{
    long long first = 0;
    long long second = 1;
    long long res = 0;
    if (n == 1)
    {
        return first;
    }
    else if (n == 2)
    {
        return second;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {

            res = first + second;
            first = second;
            second = res;
        }
        return res;
    }
}
int main()
{
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}
