#include<stdio.h>
//using namespace std;
typedef long long int ll;

main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        //freopen("/home/mark/Desktop/Codes/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    
    ll n,a=0,b=1;
    scanf("%lld",&n);
    //cin>>n;

    for(ll i=0;i<=n;i++)
    {
    	int temp=b;
    	b=b+a;
    	a=temp;
    }
    
    printf("%lld",a);
    
	return 0;
}

//1 1 2 3 5 8