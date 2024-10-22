#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    if (num1 == 0 && num2 == 0)
    {
        cout << "Origem";
    }
    else if (num1 == 0)
    {
        cout << "Eixo Y";
    }
    else if (num2 == 0)
    {
        cout << "Eixo X";
    }
    else if (num1 >= 0 && num2 >= 0)
    {
        cout << "Q1";
    }
    else if (num1 <= 0 && num2 >= 0)
    {
        cout << "Q2";
    }
    else if (num1 <= 0 && num2 <= 0)
    {
        cout << "Q3";
    }
    else if (num1 >= 0 && num2 <= 0)
    {
        cout << "Q4";
    }

    return 0;
}
