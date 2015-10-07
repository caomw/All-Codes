#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
        ll n,q;
        cin>>n>>q;

        ll visl[n+5],visr[n+5],l,r,lef=0,rig=n-1;//,quer[n+5][n+5];


        char c[5000];

        for(ll i=0;i<n;i++)
            c[i]='x';//visl[i]=0,visr[i]=0;


        while(q--)
        {
            cin>>l>>r;

            lef=min(lef,l);
            rig=max(rig,r);

            c[l]='(';
            c[r]=')';
        }

        int flag=1;
        l=0;r=n-1;

        while(1)
        {
            while(c[l]!='x')
            {
                if(l==n+5)
                {
                    flag=0;
                    break;
                }
                l++;
            }

            while(c[r]!='x')
            {
                if(r==0)
                {
                    flag=0;
                    break;
                }
                r--;
            }


            if(!flag)
                break;

            c[l]='('; 
            c[r]=')';
        }
        cout<<c<<"\n";
    }
	return 0;
}