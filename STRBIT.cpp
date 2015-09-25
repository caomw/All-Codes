#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        char s[n+5];
        cin>>s;

        long long int count=0;
        int l=0;
        while(true)
        {
            //cout<<s<<"\n";
            for(;l<strlen(s);l++)
            {
                if(s[l]=='R')
                    break;
            }
            //cout<<"L="<<l<<"\n";
            if(l==strlen(s))
                break;

            int len=strlen(s),ind;

            for(int i=l;i<min(l+k,len);i++)
            {
                if(s[i]=='R')
                    s[i]='G';

                else if(s[i]=='G')
                {
                    s[i]='R';
                }

            }
            count++;

        }

        cout<<count<<"\n";
    }
}
