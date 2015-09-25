#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;

    char s[n+1];
    for(int i=n;i>-1;i--)
    {
        //s[i]=(((n-i)+97)%26);
        int a=(i%26+97);
        cout<<char(a);
    }
    cout<<"\n";
    //cout<<s;

    }
}
