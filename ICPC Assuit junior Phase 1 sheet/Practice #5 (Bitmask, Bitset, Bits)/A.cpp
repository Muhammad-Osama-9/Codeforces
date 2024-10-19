#include <iostream>

using namespace std;

int main()
{
    long long num  , bac_num = 0    ;
    cin >> num ;
while (num )
{
    if (num &1)
    {
        bac_num ++ ;
    }
    num = num >>1;

}
cout << bac_num ;
  return  0 ;
}