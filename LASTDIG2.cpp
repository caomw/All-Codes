#include<iostream>
#include<cstdlib>
using namespace std;
static int table[] = {
0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4,
5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9
};

int unit_digit(int n, int a)
{
return table[((n%10)<<2)+(a&3)];
}
int main()
{
int t;
cin>>t;
while(t>0)
{
long long int b,a;
cin>>a;
cin>>b;
if(b==0)
{
cout<<1<<endl;
}
else if(a==0)
{
cout<<0<<endl;
}
else{
int d=unit_digit(a,b);
cout<<d<<endl;
}
t--;
}
}
