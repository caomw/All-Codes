#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,p;
        cin>>n;

        string s;
        cin>>s;

        cin>>p;

        int flag=1;
        if(s=="odd")
            flag=0;
        else
            flag=1;

        cout<<2*p-flag<<"\n";
    }
}
