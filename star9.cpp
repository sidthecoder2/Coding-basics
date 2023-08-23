#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int k = n-i+1;
        int j=1;
        while(j<=k)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}