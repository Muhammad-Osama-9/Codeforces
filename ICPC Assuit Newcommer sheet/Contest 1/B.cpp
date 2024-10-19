#include <iostream>
#define llu unsigned long long
using namespace std;

int main(void)
{
    llu a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if (a % k == 0)
        cout << "Memo";
    else if (b % k == 0)
    {
        cout << "Momo";
    }
    else
    {
        printf("No One");
    }
    return 0;
}