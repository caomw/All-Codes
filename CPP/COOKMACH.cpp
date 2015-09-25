#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



ll sum,ten;
void binary(ll num)
{
    ll rem;
    ten++;

    if (num <= 1)
    {
        sum+=num;
        return;
    }
    rem = num % 2;
    binary(num / 2);
    sum+=rem;

}


int main()
{
    std::ios::sync_with_stdio(0);

        ll t;
        cin>>t;

        while(t--)
        {
            ll a,b,counti=-1,powb;
            cin>>a>>b;

            sum=0;ten=-1;
            //cout<<"a";
            binary(b);

            powb=ten;
            //cout<<powb<<"\n";

            while(1)//&&0)
            {
                sum=0;ten=-1;
                binary(a);
                if(sum==1)
                {
                    counti+=abs(powb-ten);
                    counti++;
                    break;
                }
                counti++;
                a/=2;

            }
            cout<<counti<<"\n";

        }

}
