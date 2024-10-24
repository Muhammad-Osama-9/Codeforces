#include <iostream>
using namespace std;

int main(void)
{
    int n, num = 1;
    cin >> n;
    string pum = "PUM";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (num % 4 == 0)
                cout << pum;
            else
            {
                cout << num << " ";
            }
            num++;
        }
        cout << endl;
    }

    return 0;
}
