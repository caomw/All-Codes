#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;

        char c[100000];
        cin>>c;

        for(int i=0;i<strlen(c);i++)
        {
            cout<<char((c[i]+k-'a')%26+'a');
        }
        cout<<"\n";
    }
}
