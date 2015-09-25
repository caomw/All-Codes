#include<bits/stdc++.h>
typedef long int ll;
//using namespace std;
 
main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    scanf("%ld",&t);
 
    while(t--)
    {
        ll total, n;
        scanf("%ld%ld",&total,&n);
 
        ll arr[n+5];
        for(ll i=0;i<n;i++)
            scanf("%ld",&arr[i]);//cin>>arr[i];//,sum[i]=arr[i]+sum[i-1];
 
        std::sort(arr,arr+n);
        ll cuts=n-1,i=0,ans=0;
 
/*
                    cout<<"BEFORE: \n";
                    for(ll j=i;j<n;j++)
                        cout<<arr[j]<<" ";
                    cout<<"\n";*/
        while(1)
        {
 
                //cout<<cuts<<" "<<arr[i]<<" "<<ans<<"\n";
            //if(i>=n-1||cuts<1||ans>=cuts)
              if(i>=n||arr[i]==total||cuts<1)
                break;
 
            //arr[x]=arr[];
            if(arr[i]<cuts)
                {
 
                    ans+=arr[i];
                    //arr[n-ans-1] += sum[n-1] - sum[n-ans-1] + ans;
                    //cout<<"sum = "<<N<<" "<<ans<<" "<<sum[N-1] - sum[N-ans-1]<<"\n";
                    
                    n-=arr[i];
                    cuts-=arr[i];cuts--;
                    i++;
 
                }
            else
                {
                    ans+=cuts;
                    break;
                }
/*
                    cout<<"AFTER: \n";
                    for(ll j=i;j<n;j++)
                        cout<<arr[j]<<" ";
                    cout<<"\n";*/
        }
        printf("%ld\n",ans );
        //cout<<ans<<"\n";
    }
	return 0;
} 