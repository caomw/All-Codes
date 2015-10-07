#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    char a[1005],b[1005];
    ll ac[30],bc[30];

    while(1)//||scanf("%s%s",a,b)!=EOF)
    {
    scanf("%s%s",&a,&b);

        memset(ac,0,sizeof(ac));
        memset(bc,0,sizeof(bc));

        for(ll i=0;i<strlen(a)||i<strlen(b);i++)
        {
            if(i<strlen(a))
            ac[a[i]-'a']++;//,cout<<a[i]<<" a\n";

            if(i<strlen(b))
            bc[b[i]-'a']++;//,cout<<b[i]<<" b\n";

        }

        for(ll i=0;i<26;i++)
        {
            ac[i]=min(ac[i],bc[i]);
            //cout<<ac[i]<<" ";
        }

        for(ll i=0;i<26;i++)
        {

            char c=i+'a';
            for(ll j=0;j<ac[i];j++)
            putchar(c);//cout<<c;
        }
        cout<<"\n";

    }
}
