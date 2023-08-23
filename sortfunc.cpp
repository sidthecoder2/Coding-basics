// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;
    cout << "\nArray after sorting using default sort is : \n";
    sort(arr, 10);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
