#include <iostream>
using namespace std;
typedef long long int ll;

ll prime(ll number)
{
    ll div=2, ans = 0, maxFact;
    while(number!=0){
        if(number % div !=0)
            div = div + 1;
        else{
            maxFact  = number;
            number = number / div;

            if(number == 1){
                return maxFact;
                //printf("%d is the largest prime factor !",maxFact);
                ans = 1;
                break;
            }
        }
    }

}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll counti=0;

        cout<<prime(n)<<"\n";
        while(n>1)
        {
            n=n/prime(n);
            counti++;
        }

        cout<<counti<<"\n";
    }


}
