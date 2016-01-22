#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 long long int C (long long int n, long long int r) {
         long long int res = 1,i;
         if(r > n/2)
                 r = n-r;
         for(i = 0; i < r; i++) {
                 res *=  n;
                 res /= i+1;
                 n--;
          }
          return res;
  }
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t ;
	cin>>t;

	for(int j=0;j<t;j++)
	{
		ll n,k;
		cin>>n>>k;

		cout<<C(n-1,k-1)<<"\n";
	}
}