#include <iostream>
using namespace std;

int main()
{
    long long num1, num2, result;

    cin >> num1 >> num2;
    result = (num1 % 10) + (num2 % 10);
    cout << result;
}
