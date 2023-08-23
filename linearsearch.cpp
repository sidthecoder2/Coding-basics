#include <iostream>
using namespace std;

int searchkeu(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 1, 9, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int index = searchkeu(arr, size, key);
    if (index == -1)
    {
        cout << "Key not found!" << endl;
    }
    else
    {
        cout << "Key found at index: " << index << endl;
    }
    return 0;
}