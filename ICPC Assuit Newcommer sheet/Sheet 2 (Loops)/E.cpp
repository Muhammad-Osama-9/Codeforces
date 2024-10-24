#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    long long n, max = 0;

    for (int i = 0; i < num; i++)
    {
        cin >> n;
        if (n > max)
        {
            max = n;
        }
    }
    cout << max;

    return 0;
}
