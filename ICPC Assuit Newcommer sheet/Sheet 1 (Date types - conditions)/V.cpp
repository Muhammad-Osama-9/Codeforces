#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    char indexopr;
    cin >> num1 >> indexopr >> num2;
    if (indexopr == '=')
    {
        if (num1 == num2)
            printf("Right");
        else
        {
            printf("Wrong");
        }
    }
    else if (indexopr == '>')
    {
        if (num1 > num2)
            printf("Right");
        else
        {
            printf("Wrong");
        }
    }
    else if (indexopr == '<')
    {
        if (num1 < num2)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    return 0;
}
