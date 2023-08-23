#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int ncr(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    int res = num / den;
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Answer is :" << ncr(a, b) << endl;
    return 0;
}