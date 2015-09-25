#include<bits/stdc++.h>
using namespace std;

main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    long long  t;
    cin >> t;
    cout << fixed << setprecision(6);
    while(t--)
    {
        long long  m;
        long double mon = 1000000000;
        long double p;
        cin >> m >> p;


        long double fir;

        if(m%2==1){
                    fir=mon*(1+pow(p,m));}
        else 
            fir=mon*(1-pow(p,m));
        

        fir/=(1+p);
        cout << fir << ' ' << mon-fir << '\n';

    }
	return 0;
}