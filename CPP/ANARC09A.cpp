#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    std::ios::sync_with_stdio(0);
    ll t=0;

    while(1)
    {
        t++;
        char c[2005];
        cin>>c;

        ll counti=0;
        stack<char> st;
        if(c[0]=='-')
        break;

        for(ll i=0;i<strlen(c);i++)
        {
            if(st.empty()||
            !(st.top()=='{'&&c[i]=='}'))
            {
                st.push(c[i]);
            }

            else
            {
                st.pop();
            }
        }

        while(!st.empty())
        {
            char top,top1;
            top=st.top();
            st.pop();
            top1=st.top();
            st.pop();

            if(top=='{')
            {
                if(top1=='}')
                counti+=2;
                else if(top1=='{')
                counti++;
            }
            else if(top=='}')
            {
                if(top1=='}')
                counti++;
                else if(top1=='{');
            }
        }

        cout<<t<<". "<<counti<<"\n";
    }
}



