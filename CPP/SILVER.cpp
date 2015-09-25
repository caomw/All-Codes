#include <iostream>
using namespace std;
typedef long long int ll;

int main() {

	std::ios::sync_with_stdio(0);

	while(1)
	{
		ll n;
		cin>>n;

		if(!n)
		break;

		ll sum=0,i=1,counti=0;
		while(sum<n)
		{
          //  cout<<i<<" i\n";
            sum+=i;
            i*=2;
            counti++;
		}

		//if(sum==n)
		//counti++;
		counti--;

		//cout<<sum<<" s\n";
		cout<<counti<<"\n";
	}
}
