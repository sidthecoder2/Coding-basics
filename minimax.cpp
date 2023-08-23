#include <iostream>
#include <climits>
using namespace std;

void minimax(int arr[], int size)
{
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }
    cout << "MAX ELEMENT: " << maximum << endl
         << "Minimum Element: " << minimum << endl;
}

int main()
{
    int testcase, size;
    int arr[1000];
    cin >> size;
    minimax(arr, size);
    return 0;
}