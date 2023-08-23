#include <iostream>
using namespace std;

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

    int first[15] = {2, 7};
    printarr(first, 6);

    int sec[7] = {1};
    printarr(sec, 4);

    int third[9] = {0};
    printarr(third, 9);

    return 0;
}