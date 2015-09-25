#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string a;
    getline(cin,a);

    while(t--)
    {
        string s;
        getline(cin,s);

        int x1,y1,x2,y2,count=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%6==0)
                x1=s[i];
            if(i%6==1)
                y1=s[i];
            if(i%6==3)
                x2=s[i];
            if(i%6==4)
                y2=s[i];

            if(i%6==4)
            {
                if(x1==y2&&y1==x2)
                    count++;
                else if(x1==x2&&y1==y2)
                    count++;
                else if(x1==y1&&x2==y2)
                    count++;
            }

        }

        cout<<count<<"\n";
    }
}
