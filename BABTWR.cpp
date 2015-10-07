#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct BOX
{
    ll a[3],h;

    bool operator <(const BOX &other)const
        {return a[2]<other.a[2];}
};

main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    while(1)
    {
        ll n;
        cin>>n;

        if(!n)
            break;

        vector<BOX> B;

        for(ll i=0;i<n;i++)
        {
            BOX box;
            cin>>box.a[0]>>box.a[1]>>box.a[2];

            sort(box.a,box.a+3);
            do
            {B.push_back(box);}
            while(next_permutation(box.a,box.a+3));
        }

        sort(B.begin(),B.end());
        ll best=0;
        for(ll i=0;i<B.size();i++)
        {
            B[i].h = B[i].a[2];

            for(ll j=0;j<i;j++)
            {
                if(B[j].a[0]<B[i].a[0] and B[j].a[1]<B[i].a[1])
                    B[i].h = max(B[i].h,B[j].h+B[i].a[2]); 
            }

            best=max(best,B[i].h);
        }

        cout<<best<<"\n";

    }
    return 0;
}