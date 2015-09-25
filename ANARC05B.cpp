#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    while(1)
    {
        ll n1;
        cin>>n1;

        if(!n1)
        break;

        ll arr1[n1+5],sum1[n1+5];
        cin>>arr1[0];
        sum1[0]=arr1[0];

        for(ll i=1;i<n1;i++)
        cin>>arr1[i],sum1[i]=sum1[i-1]+arr1[i];

        ll n2;
        cin>>n2;

        ll arr2[n2+5],sum2[n2+5];
        cin>>arr2[0];
        sum2[0]=arr2[0];

        ll ans=0,pidx=-1,idx=-1,pi=-1,i,a,b;

        for(i=0;i<n2;i++)
        {


            if(i)
            cin>>arr2[i],sum2[i]=sum2[i-1]+arr2[i];
            else
            sum2[i]=arr2[i];

            //cout<<sum2[i]<<" ";

            idx=lower_bound(arr1,arr1+n1,arr2[i])-arr1;
            //cout<<idx<<" index\n";

            if(arr2[i]==arr1[idx])
            {

                if(pidx>=0)
                a=sum1[idx]-sum1[pidx];
                //cout<<sum1[idx]<<" "<<sum1[pidx]<<" 1\n";

                else
                a=sum1[idx];
                //cout<<sum1[idx]<<" 2\n";

                if(pi>=0)
                b=sum2[i]-sum2[pi];
                //cout<<sum2[i]<<" "<<sum2[pi]<<" 3\n";
                else
                b=sum2[i];
                //cout<<sum2[i]<<" 4\n";

                pi=i;
                pidx=idx;

                ans+=max(a,b);
                //cout<<"max(a,b) = "<<max(a,b)<<"\n";
            }
        }

        if(pidx>=0)
        a=sum1[n1-1]-sum1[pidx];
        else
        a=sum1[n1-1];

        if(pi>=0)
        b=sum2[n2-1]-sum2[pi];
        else
        b=sum2[n2-1];
        ans+=max(a,b);
        cout<<ans<<"\n";



    }
}
