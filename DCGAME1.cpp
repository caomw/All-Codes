#include<bits/stdc++.h>
/*
#ifdef ONLINE_JUDGE
    #define getchar getchar_unlocked
#endif
*/
using namespace std;
typedef long long int ll;

map<long int,long int> mapi,idx;
long int arr[1000005],p;

void maxHist(long int arr[],long int n)//,map<long int,long int> mapi)
{
    stack<long int> st;
    long int i=0,maxArea=0,tp;

    while(i<n)
    {
        if(st.empty()||arr[i]<=arr[st.top()])
            st.push(i++);
        else
        {
            tp=st.top();
            st.pop();

            mapi[arr[tp]]+=(i-tp)*((st.empty()?i:i-st.top()-1)+1)
            -(i-tp)*(i-tp);

            //cout<<arr[tp]<<" "<<mapi[arr[tp]]<<" a1\n";

        }
    }

while(!st.empty())
        {
            tp=st.top();
            st.pop();

            mapi[arr[tp]]+=(i-tp)*((st.empty()?i:i-st.top()-1)+1)
            -(i-tp)*(i-tp);

            //cout<<arr[tp]<<" "<<mapi[arr[tp]]<<" a1\n";

        }
return;
}
char ansch[1000000005];

long int sum[1000005];
int main()
{
    std::ios::sync_with_stdio(0);

        long int n,q;
        cin>>n>>q;

        for(long int i=0;i<n;i++)
        cin>>arr[i];

        maxHist(arr,n);

        map<long int,long int>::iterator it;
        long int k=0;

        it=mapi.begin();
        sum[0]=(*it).second;

        for(;it!=mapi.end();it++)
        {
        arr[k]=(*it).first;

        if(k)
        sum[k]=sum[k-1]+(*it).second;

      /*  cout<<(*it).first<<" "<<(*it).second<<" "
        <<sum[k]<<"\n";
*/
        k++;
        }

    while(q--)
    {
        char c,D;

        long int num;
        cin>>c>>num;
        cin>>D;

        long int ind,ans;

        //if(idx[num])
         //   ind=idx[num];

       // else
     //   {
            ind=lower_bound(arr,arr+k,num)-arr;
   //         idx[num]=ind;
 //       }

   //    cout<<ind<<"\n";

        if(c=='>')
        {
            if(arr[ind]>num)
            ind--;

            if(ind>k-1)
            ans=0;
            else
            ans=sum[k-1]-sum[ind];
        }
        else if (c=='=')
        {
            if(arr[ind]>num)
            ind--;
            else if(arr[ind]<num)
            ind++;

            if(ind==0)
            ans=sum[ind];
            else
            ans=sum[ind]-sum[ind-1];

            if(arr[ind]!=num)
            ans=0;

        }
        else if(c=='<')
        {
            if(arr[ind]>=num)
            ind--;

            if(ind==-1)
            ans=0;
            else if(num>arr[k-1])
            ans=sum[k-1];
            else if(ind!=-1)
            ans=sum[ind];
        }

//cout<<ans<<"\n";

        if(D=='D')
        ans++;

        if(ans&1)
        //cout<<'C';
        ansch[p++]='C';
        else
        //cout<<'D';
        ansch[p++]='D';

    }
ansch[p++]='\0';
cout<<ansch;

}
