#include <iostream>
using namespace std;

int firstoccur(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastoccur(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1; // agar value present hi nahi hai to return hoga -1
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int key;
    int even[14] = {1, 2, 2, 2, 2, 2, 5, 5, 5, 6, 7, 8, 8, 8};
    cout << "The key which we are searching for: " << endl;
    cin >> key;
    cout << "The first index appearing for key is: " << firstoccur(even, 14, key) << endl;
    cout << "The last index appearing for key is: " << lastoccur(even, 14, key) << endl;
    return 0;
}