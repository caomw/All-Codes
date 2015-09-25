#include<iostream>
using namespace std;

int month(int m,int y)
{

    int leap=0;
    if(y%4==0||y%100)
    {
        if(y%400)
        leap=1;
    }

    if(m==1&&leap)
    return 6;
    else if(m==1&&!leap)
    return 0;
    else if(m==2&&leap)
    return 2;
    else if(m==2&&!leap)
    return 3;
    else if(m==3)
    return 3;
    else if(m==4)
    return 6;
    else if(m==5)
    return 1;
    else if(m==6)
    return 4;
    else if(m==7)
    return 6;
    else if(m==8)
    return 2;
    else if(m==9)
    return 5;
    else if(m==10)
    return 0;
    else if(m==11)
    return 3;
    else if(m==12)
    return 5;
}

int main()
{
    std::ios::sync_with_stdio(0);

    int t;
    cin>>t;

    while(t--)
    {
        int d,m,y;
        cin>>d>>m>>y;

        int y1=y/100,c;
        if(y1%4==0)
        c=6;
        else if(y1%4==1)
        c=4;
        else if(y1%4==2)
        c=2;
        else if(y1%4==3)
        c=0;

        m = month(m,y);
        y%=100;
        cout<<(d+m+y+(y%4)+c)%7<<"\n";
    }
}
