#include <iostream>
using namespace std;

void adjreverse(int arr[], int size)
{
    int start = 0, end = 1;
    while (start < size && end < size)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size, arr[100];
    cout << "Size of Array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Print original array: ";
    printarr(arr, size);

    adjreverse(arr, size);
    cout << "Adjacent reversed: ";
    printarr(arr, size);
    return 0;
}