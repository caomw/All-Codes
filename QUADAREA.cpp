#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        double area,a,b,c,d,s;

        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;

        s=(a+b+c+d)/2;
        //cout<<s<<"\n";
        area=sqrt((s-a)*(s-b)*(s-c)*(s-d));

        //cout<<setprecision(2)<<area<<"\n";
        printf("%.2lf\n",area);
    }
}
