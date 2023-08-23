#include <iostream>
using namespace std;

int main()
{
    int n100,n50,n20,n1,num;
    n100=n50=n20=n1=num=0;
    cin>>num;

    switch(num>=100)
    {
        case 1:
            n100 = num/100;
            num -= n100*100;
            break;
    }

    switch(num>=50)
    {
        case 1:
            n50 = num/50;
            num -= n50*50;
            break;
    }

    switch(num>=20)
    {
        case 1:
            n20 = num/20;
            num -= n20*20;
            break;
    }

    switch(num>=1)
    {
        case 1:
            n1=num;
            break;
    }

    cout<<n100<<n50<<n20<<n1;

    return 0;
}