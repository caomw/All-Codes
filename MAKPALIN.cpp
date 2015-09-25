#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int ll;


bool isPalin(string s)
{
    ll n=s.length(),flag=1;

    for(ll i=0;i<n/2;i++)
    {
        char c1=s.at(i), c2=s.at(n-1-i);
        //cout<<c1<<" =c1 c2="<<c2<<"\n";
        
        if(c1=='?'||c2=='?')
            continue;

        if(s[i]!=s[n-1-i])//&&c1!='?'&&c2=='?')
            {flag=0;break;}
    }

    return flag;
}
main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    while(t--)
    {
    	string c;
        cin>>c;

// abcd
// Aabcd  aAbcd abAcd abcAd abcdA
// A1234 56789 1A234 56789 12A34 56789 123A4 56789
// 1234A 56789 12345 A6789 12345 6A789 12345 67A89
// 12345678A9 123456789A
// 0 7
// 1 6
// 2 5
// 3 4
// 
// 0 8
// 1 6
// 2 5
// 3 4
// 
// 0 8
// 1 7
// 2 5
// 3 4
// 
// 0 8
// 1 7
// 2 6
// 3 5
// 
// 0 8
// 1 7
// 2 6
// 3 5
// 
// 0 8
// 1 7
// 2 6
// 4 5
// 
// 0 8
// 1 7
// 3 6
// 4 5
// 
// 0 8
// 2 7
// 3 6
// 4 5
// 
// 1 8
// 2 7
// 3 6
// 4 5

// 12345 678A9 12345 6789A




        ll flag=1,counti=0,n=c.length();

        for(ll i=0;i<=n;i++)
        {
            string check1=c.substr (0,i),
            check2=c.substr (i,n-i),
            check;
            
            check=check1+"?"+check2;
            //cout<<check<<" =check\n";

            char a[5000],b[5000];
            strcpy(a,check.c_str());
            strcpy(b,check.c_str());
            strrev(b);

            if(strcmp(a,b)==0)
                counti++;
            // if(isPalin(check))
            //     counti++;//cout<<check<<"\n";
        }

        cout<<counti<<"\n";
    }
	return 0;
}