#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int ans=1;
    for(int i =1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{   
    int num1,num2;
    cin>>num1>>num2;
    cout<<"answer is:"<<pow(num1,num2)<<endl;
    return 0;
}