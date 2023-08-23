#include <iostream>
using namespace std;

int bit(int a, int b)
{
    int bit = 0;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            bit++;
        }
        a >>= 1;
    }
    while (b != 0)
    {
        if (b & 1 == 1)
        {
            bit++;
        }
        b >>= 1;
    }
    return bit;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The total number of 1 bits in no a & b are:" << bit(num1, num2) << endl;

    return 0;
}