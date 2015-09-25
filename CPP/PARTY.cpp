#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll cost=0;
// Returns the maximum value that can be put in a knapsack of capacity W
ll knapSack(ll W, ll wt[], ll val[], ll n)
{
   // Base Case
   if (n == 0 || W == 0)
       return 0;

   // If weight of the nth item is more than Knapsack capacity W, then
   // this item cannot be included in the optimal solution
   if (wt[n-1] > W)
       return knapSack(W, wt, val, n-1);

   // Return the maximum of two cases: (1) nth item included (2) not included
   ll x=val[n-1] + knapSack(W-wt[n-1], wt, val, n-1);
   ll y=knapSack(W, wt, val, n-1);

   if(x>y)
   cost+=wt[n-1];


   return max(x,y);
   return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1)
                  );
}


int main()
{

while(1)
{

    ll W,n;
    cin>>W>>n;

    ll val[n+5],wt[n+5],knap[n+5][W+5],cost=0;

    if(!W||!n)
    break;

    for(ll i=0;i<n;i++)
    {
        cin>>wt[i];
        cin>>val[i];
    }

    for(ll i=0;i<=n;i++)
    {
        for(ll w=0;w<=W;w++)
        {
            if(i==0||w==0)
            knap[i][w]=0;

            else if(wt[i-1]<=w)
            knap[i][w]=max(val[i-1]+knap[i-1][w-wt[i-1]],
            knap[i-1][w]);

            else
            knap[i][w]=knap[i-1][w];

            if(knap[i][w]==val[i-1]+knap[i-1][w-wt[i-1]])
            cost+=w;//-wt[i-1];
        }
    }


    cout<<knapSack(W,wt,val,n)<<"\n";
    cout<<cost<<"\n";
}
}
