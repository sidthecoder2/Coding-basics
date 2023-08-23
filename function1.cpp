#include <iostream>
#include <climits>
using namespace std;

void update(int n)
{
    cout << "Inside the funciton" << endl;
    n++;
    cout << n << endl
         << "Going to main" << endl;
}

int main()
{
    int n;
    cin >> n;
    update(n);

    cout << "In the main" << endl;
    cout << n;
    return 0;
}