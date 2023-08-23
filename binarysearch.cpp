#include <iostream>
using namespace std;

int binarysear(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {8, 5, 6, 2, 4, 9};
    int index = binarysear(even, 6, 90);
    cout << "Index of key: " << index << endl;
    return 0;
}