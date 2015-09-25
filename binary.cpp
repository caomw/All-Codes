#include<bits/stdc++.h>
using namespace std;
#define mac 2
string d2b(int num)
{
    string s="000000000000000000000000000000";
    int i=29;

    while(num)
    {
        if(num&1)
            s[i]='1';
        else
            s[i]='0';
        i--;
        num/=2;
    }

    return s;
}
main()
{

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    cout<<d2b(mac)<<"\n";

    long long div = pow(2,29);
    long long  num =mac;

    for(long long  i=29;i>=0;i--)
    {
        long long a=num/div;
        a%=2;
        div/=2;
        cout<<a<<"";
    }

    cout<<"\n";
    bitset<30> binNum(mac);
    cout<<binNum;
	return 0;
}