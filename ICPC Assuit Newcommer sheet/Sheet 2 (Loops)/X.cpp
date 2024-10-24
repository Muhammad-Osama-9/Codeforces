#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int test_case, counter;
    unsigned long long num;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        counter = 0;
        cin >> num;
        while (num)
        {
            counter += num & 1;
            num /= 2;
        }
        cout << (long long)(pow(2, counter) - 1) << endl;
    }

    return 0;
}
