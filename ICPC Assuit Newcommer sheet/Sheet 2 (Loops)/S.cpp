#include <iostream>
using namespace std;

int main(void)
{
    int num;
    long long n1, n2, temp, sum;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> n1 >> n2;
        sum = 0;
        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        for (n1++; n1 < n2; n1++)
        {

            if (n1 % 2 != 0)
            {
                sum += n1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
