#include <iostream>
using namespace std;

bool isEven(int n)
{
    if(n&1==1)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{   
    int num1;
    cin>>num1;
    cout<<"Is this number even?? "<<isEven(num1);
    return 0;
}