// unique_copy example
#include <bits/stdc++.h>
using namespace std;
typedef long int ll;

bool myfunction (ll i, ll j) {
  return (i==j);
}

int main()
{
    std::ios::sync_with_stdio(0);
    ll n,q;
    cin>>n>>q;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
    cin>>arr[i];

    while(q--)
    {
    ll l,r,test;
    cin>>test;
    cin>>l>>r;
    l--;//r--;
  vector<ll> myvector (n+5);                            // 0  0  0  0  0  0  0  0  0

  // using default comparison:
  vector<ll>::iterator it;

  it=unique_copy (arr+l,arr+r,myvector.begin());   // 10 20 30 20 10 0  0  0  0
                                                            //                ^

  //sort (myvector.begin(),it);                          // 10 10 20 20 30 0  0  0  0
                                                            //                ^

  // using predicate comparison:
  it=unique_copy (myvector.begin(), it, myvector.begin(), myfunction);
                                                            // 10 20 30 20 30 0  0  0  0
                                                            //          ^

  myvector.resize( distance(myvector.begin(),it) );    // 10 20 30

  // print out content:
  cout << myvector.size()<<"\n";

    }
}

