#include <iostream>
using namespace std;

int main()
{
    int i=1;
    char ch='1';

    switch (i)
    {
    case 1: 
        cout<<"Number 1"<<endl;
        break;

    case '1': 
        cout<<"char 1"<<endl;
        break;

    default:
        break;
    }

    return 0;
}