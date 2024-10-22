#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int num1, num2;
    char ope;
    int result;
    cin >> num1 >> ope >> num2;
    if (ope == '+')
    {
        result = num1 + num2;
        cout << result;
    }
    else if (ope == '-')
    {
        result = num1 - num2;
        cout << result;
    }
    else if (ope == '*')
    {
        result = num1 * num2;
        cout << result;
    }
    else if (ope == '/')
    {
        result = num1 / num2;
        cout << result;
    }
    return 0;
}
