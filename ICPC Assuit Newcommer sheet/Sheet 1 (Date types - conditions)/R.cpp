#include <iostream>

using namespace std;

int main()
{
    long long day;
    int years, month, days;
    cin >> day;
    years = day / 365;
    month = (day - (365 * years)) / 30;
    days = (day - (365 * years)) - (30 * month);
    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days";
    return 0;
}
