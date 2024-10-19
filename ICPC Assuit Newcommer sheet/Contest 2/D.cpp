#include <iostream>
using namespace std;

int main(void)
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    unsigned long long result_2 = 0, result_1 = 0;
    unsigned long long num1, num2;
    cin >> test;

    while (test--)
    {
        result_2 = 0;
        result_1 = 0;

        cin >> num1 >> num2;
        result_1 = (num1 + 1) * (num1 / 2) + (num1 % 2) * ((num1 / 2) + 1);
        result_2 = (num2 + 1) * (num2 / 2) + (num2 % 2) * ((num2 / 2) + 1);
        printf("%lld\n", num1 < num2 ? (result_2 - result_1) + num1 : (result_1 - result_2) + num2);
    }

    return 0;
}
 