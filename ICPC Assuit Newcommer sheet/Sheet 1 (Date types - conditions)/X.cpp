#include <iostream>

using namespace std;

int main()
{

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= c && a <= d) /// A Between c,d ///
    {
        if (b <= d)
        {
            printf("%lld %lld", a, b);
        }
        else
        {
            printf("%lld %lld", a, d);
        }
    }
    else if (c >= a && c <= b) /// C between  A , B ///
    {

        if (d <= b)
        {
            printf("%lld %lld", c, d);
        }
        else
        {
            printf("%lld %lld", c, b);
        }
    }
    else if (a > d)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}
