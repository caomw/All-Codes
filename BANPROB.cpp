#include<bits/stdc++.h>
using namespace std;

main()
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    uint64_t t;
    cin>>t;

    while(t--)
    {
        uint64_t mon = 1000000000,m;
        long double p;
        cin>>m>>p;

        if(!p)
        {
            if(&m)
                cout<<"1000000000.000 0.000\n";
            else
                cout<<"0.000 1000000000.000\n";

            continue;
        }

        long double fir=0,sec=0,cmon=mon*pow(p,m-1);
        
        int lev=1;

        while(m--)
        {
            if(lev)
            {
                fir = cmon-sec;
                lev = not lev;
            }
            else
            {
                sec = cmon-fir;
                lev = not lev; 
            }
            
            cmon/=p;
        }

        printf("%Lf %Lf\n",fir,sec);
    }
	return 0;
}