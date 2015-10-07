#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
#define ll long long int
#define pp pair<ll,ll>
using namespace std;

ll polygonArea(long long int* X,long long int*  Y,long long int numPoints)
{
  long long int area = 0;
  long long int j = numPoints-1;

  for (long long int i=0; i<numPoints; i++)
    { area = area +  (X[j]+X[i]) * (Y[j]-Y[i]);
      j = i;
    }
  return abs(area);
}

void fastWrite(long long int n)
{

char sum[20];
long long int i=0;
do
{ sum[i++]=n%10+48;
  n=n/10;

}while(n!=0);

while(i>0)
{
  putchar(sum[--i]);

}
 putchar(' ');

}

inline void get(long long int &x)

{
    register long long int c = getchar();

    x = 0;

    long long int neg = 0;

    for(;((c<48 || c>57) && c != '-');c = getchar());

    if(c=='-') {neg=1;c=getchar();}

    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}

    if(neg) x=-x;

}


int main()
{
    std::ios_base::sync_with_stdio(0);
    map<ll,ll> area_map;
    long long int t;
    get(t);

    while(t--)
    {
        long long int n;
        area_map.clear();
        get(n);
        //scanf("%lld",&n);
        ll area[n];

        for(long long int i=0;i<n;i++)
        {
            long long int s;
            get(s);
            //scanf("%lld",&s);
            long long int px[s+5],py[s+5];

            for(long long int k=0;k<s;k++)
            {
                get(px[k]);
                get(py[k]);
                //scanf("%lld%lld",&px[k],&py[k]);
            }

            area[i] = polygonArea(px,py,s);

            area_map[polygonArea(px,py,s)] = i;

        }

        long long int i=0;
        map<ll,ll>::iterator it;
        for(it=area_map.begin();it!=area_map.end();it++)
            area_map[(*it).first]=i++;

        for(i=0;i<n;i++)
            printf("%lld ",area_map[area[i]]);


    }
}
