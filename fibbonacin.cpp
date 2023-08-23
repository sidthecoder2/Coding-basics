#include <iostream>
using namespace std;

int fib(int a)
{
    int t1 = 0, t2 = 1, nextterm = 1;
    if (a == 1 || a == 2)
    {
        nextterm = a;
    }
    for (int i = 3; i <= a; i++)
    {
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return nextterm;
}

int main()
{
    int num1;
    cin >> num1;
    cout << "The nth no of fibbonacci series is: " << fib(num1) << endl;

    return 0;
}