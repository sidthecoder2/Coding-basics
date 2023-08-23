#include <iostream>
using namespace std;

void inputarr(int arr[], int size)
{
    cout << "Taking Input" << endl;
    for (int j = 0; j < size; j++)
    {
        cin >> arr[j];
    }
}

void printarr(int arr[], int size)
{
    cout << "Printing array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{

    int n;
    int arr[100];
    cin >> n;
    inputarr(arr, n);
    printarr(arr, n);
    return 0;
}