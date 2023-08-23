#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int f=1;
        int k=n-i+1;
        while(f<=k)
        {
            cout<<f;
            f++;
        }

        int m=1;
        while(m<=(i-1)*2 && i>1)
        {
            cout<<"*";
            m++;
        }
        
        while (k)
        {
            cout<<k;
            k--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}