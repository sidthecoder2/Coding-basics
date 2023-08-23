#include <iostream>
using namespace std;

// user defined ftn to print array
void printArr(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    // declare array
    const int size = 10;
    char arr[10] = {'S', 'i', 'd', 'd', 'h', '1', 'r', 't', 'h', 'a'};

    // temp variable to aid in swapping
    int temp;
    cout << "Original array: ";
    printArr(arr, size);

    // swapping first and last element
    swap(arr[size - 2], arr[size - 1]);

    cout << "Array with first and last element swapped: ";
    printArr(arr, size);

    return 0;
}
