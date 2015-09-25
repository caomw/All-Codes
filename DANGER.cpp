#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

	std::ios::sync_with_stdio(0);

    while(1)
    {
        char c[4];
        cin>>c;

        ll n;
        n=(c[0]-'0')*10+(c[1]-'0');

        for(ll i=0;i<c[3]-'0';i++)
        n*=10;

        if(!n)
        break;

        vector<ll> vec;
        for(ll i=1;i<=n;i++)
        {
            vec.push_back(i);
        }

        vector<ll>::iterator i=vec.begin(),it=vec.begin();

        ll ind=1;
        it++;
        while(vec.size()!=1)
        {
            vec.erase(it+ind);
            ind=(ind+2)%vec.size();
            for(ll i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
            cout<<"\n";
        }

        //vec.erase(it+2);
        cout<<vec.size()<<"\n";

    }


}

