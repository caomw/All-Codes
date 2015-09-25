#include<cstring>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

vector<ll> vec[11];
bool vis[1000000];
ll dist[1000000];
char c[1000000];
list<ll> que;

int main()
{
    std::ios::sync_with_stdio(0);

    cin>>c;

    for(ll i=0;i<strlen(c);i++)
    {
        vec[c[i]-'0'].push_back(i);
        dist[i]=LONG_LONG_MAX;
        vis[i]=0;
    }



    vis[0]=1;
    dist[0]=0;
    que.push_back(0);

    while(!que.empty())
    {
        ll s=que.front();
        if(s==(strlen(c)-1))
        {
            break;
        }
        que.pop_front();

        //vector<ll>::iterator it;
        for(ll j=0;j<vec[s].size();j++ )
        {
            if(!vis[vec[s][j]])
            {
                vis[vec[s][j]]=1;
                que.push_back(s);
                dist[vec[s][j]]=dist[s]+1;
            }
        }

        vec[s].clear();
        if(s-1>=0 && !vis[s-1])
        {
            vis[s-1]=1;
            que.push_back(s-1);
            dist[s-1]=dist[s]+1;
        }

        if(s+1<strlen(c) && !vis[s+1])
        {
            vis[s+1]=1;
            que.push_back(s+1);
            dist[s+1]=dist[s]+1;
        }

    }

    cout<<dist[strlen(c)-1];

}
