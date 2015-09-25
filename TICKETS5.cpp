#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char s[1000];
        cin>>s;

        char a=s[0],b=s[1];
        int len=strlen(s),flag=1;

        if(a==b)
            cout<<"NO\n";
        else
        {
            for(int i=2;i<len;i++)
            {
                if(i&1)
                {
                    if(s[i]!=b)
                        {
                            flag=0;
                            break;
                        }

                }
                else
                {
                    if(s[i]!=a)
                        {
                            flag=0;
                            break;
                        }

                }
            }

            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}
