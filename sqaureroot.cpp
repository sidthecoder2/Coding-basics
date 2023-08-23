#include <iostream>
using namespace std;

int binarySearch(int n)
{
    int s = 0, e = n - 1;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == n)
        {
            return mid;
        }
        if (sq > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double Precision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int a;
    cout << "The square root of no ";
    cin >> a;
    int tempSol = binarySearch(a);
    cout << endl
         << Precision(a, 3, tempSol);
    return 0;
}