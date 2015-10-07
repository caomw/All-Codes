#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll maxHist(ll arr[],ll n)
{
    stack<ll> st;
    ll i=0,maxArea=0,tp;

    while(i<n)
    {
        if(st.empty()||arr[i]>=arr[st.top()])
            st.push(i++);
        else
        {
            tp=st.top();
            st.pop();

            ll area=arr[tp]*(st.empty()?i:i-st.top()-1);

            if(maxArea<area)
            maxArea=area;
        }
    }
// 7 5 10 1 4
while(!st.empty())
{

            tp=st.top();
            st.pop();

            ll area=arr[tp]*(st.empty()?i:i-st.top()-1);

            if(maxArea<area)
            maxArea=area;
}

return maxArea;
}

int main()
{
    std::ios::sync_with_stdio(0);

    while(true)
    {
        ll n;
        cin>>n;

        if(!n)
        break;

        ll arr[n+5];

        for(ll i=0;i<n;i++)
        cin>>arr[i];

        cout<<maxHist(arr,n)<<"\n";
    }

}
