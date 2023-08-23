#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int even[7] = {16, 19, 23, 1, 3, 4, 7};
    cout << "The pivot index is: " << getPivot(even, 7);
    return 0;
}