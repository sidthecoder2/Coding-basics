#include <iostream>
#include <climits>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[1000], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of elements in array is:" << sum(arr, size);
    return 0;
}