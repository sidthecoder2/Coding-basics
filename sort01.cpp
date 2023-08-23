#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortone(int arr[], int size)
{
    int first = 0, last = size - 1;
    while (first < last)
    {
        while (arr[first] == 0 && first < last)
        {
            first++;
        }
        while (arr[last] == 1 && first < last)
        {
            last--;
        }
        if (first < last)
        {
            swap(arr[first], arr[last]);
            first++;
            last--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting:" << endl;
    printarr(arr, size);
    cout << "After Sorting:" << endl;
    sortone(arr, size);
    printarr(arr, size);
    return 0;
}