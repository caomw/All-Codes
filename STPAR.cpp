#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main()
{
    while(true)
    {
        ll n;
        cin>>n;

        if(!n)
            break;

        ll arr[n+5],sorted[n+5],stacki[n+5],siz=0;

        for(ll i=0;i<n;i++)
            cin>>arr[i],sorted[i]=arr[i];

        sort(sorted,sorted+n);

        stack<ll> s;


        ll i=0,flag=1,f=1,j=0;

        while(f)
        {
            f=0;

            //cout<<arr[i]<<" ";

            if(arr[i]==sorted[j]&&i!=n)
                i++,f=1,j++;

            if(!s.empty())
            {
               // cout<<s.top();
                if(s.top()==sorted[j])
                    s.pop(),f=1,j++;
            }

            if(!f&&i!=n)
            {
                s.push(arr[i++]);
                f=1;
            }
           // cout<<"\n";
        }

        if(j!=n)
            cout<<"no\n";
        else
            cout<<"yes\n";

    }
}
