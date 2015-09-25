#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        if(n%2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
