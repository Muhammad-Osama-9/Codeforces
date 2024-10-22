#include <iostream>
using namespace std;

int main(void)
{
    long long a, b, c, d, result;
    cin >> a >> b >> c >> d;
    result = (a % 1000) * (b % 1000) * (c % 1000) * (d % 100);
    cout << (result / 10) % 10 << result % 10;
    return 0;
}
