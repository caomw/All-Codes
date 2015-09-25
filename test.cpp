#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
 
typedef long long int ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    freopen("input.txt","r",stdin);
    int tests, size;
    int stock_price[50000];
     
    scanf("%d", &tests);
 
    while (tests --> 0) {
    scanf("%d", &size);
 
        for (int i=0; i<size; ++i)
            scanf("%d", &stock_price[i]);
 
        int maxi = 0;
        ll profit = 0;
        for (int i=size-1; i>=0; --i) {
            maxi = max(maxi, stock_price[i]);
            profit += (ll)maxi - stock_price[i];
            cout<<maxi<<" "<<stock_price[i]<<"\n";
        }
 
        printf("%lld\n", profit);
    }
  return 0;
}