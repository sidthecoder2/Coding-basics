#include <iostream>
using namespace std;

int ap(int num)
{
    int res = 1;
    res = 3 * num + 7;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << "The nth term of A.P. 3n+7 is : " << ap(n) << endl;
    return 0;
}