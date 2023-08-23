#include <iostream>
using namespace std;

int occur(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                return arr[j];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of Array: " << size << endl;
    cout << "The element that occured twice is: " << occur(arr, size);
}