#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,k,temp=0;
            cin>>n>>k;
            int arr[n],i;

            for(i=0;i<n;i++)
                cin>>arr[i];

            for(i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                    temp++;
            }

            if(k>temp||(k==0&&temp==n))
                cout<<"NO";
            else
                cout<<"YES";

            cout<<"\n";
    }
}
