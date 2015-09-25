#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

static ll lazy[1000000],n;

ll buildTree(ll *st,ll ss,ll se,ll arr[],ll si)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return st[si];
    }

    ll mid = ss+ (se-ss)/2;
    st[si] = buildTree(st,ss,mid,arr,2*si+1)+
             buildTree(st,mid+1,se,arr,2*si+2);
    return st[si];
}
ll sum=0;
void updateTree(ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val)
{

/*
    for(ll k=0;k<3*n;k++)
        cout<<st[k]<<" ";
    cout<<"\n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                //st[node]=st[2*node+1]+st[2*node+2];
  //              cout<<"h\n";
                return;
            }

        if(lazy[node])
        {
            st[node]+=lazy[node]*(1+se-ss);

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }

        if(ss>=i&&j>=se)
        {
            lazy[node]+=val;
           // cout<<lazy[node]<<" M\n";
    //        cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)

        //cout<<st[node]<<" x\n";
        sum+=st[node];

            return;
        }
//24
       // if(ss<i||se>j)
        {


//st[node]=st[2*node+1]+st[2*node+2];
            ll mid = ss+ (se-ss)/2;
            updateTree(st,node*2+1,ss,mid,i,j,val);
            updateTree(st,node*2+2,mid+1,se,i,j,val);

        if(lazy[2*node+1])
        {
            st[2*node+1]+=lazy[2*node+1]*(1+mid-ss);

            if(mid!=ss)
            {
                lazy[2*(2*node+1)+1]+=lazy[2*node+1];
                lazy[2*(2*node+1)+2]+=lazy[2*node+1];
            }

            lazy[2*node+1]=0;
        }

        if(lazy[2*node+2])
        {
            st[2*node+2]+=lazy[2*node+2]*(se-mid);

            if(se!=mid+1)
            {
                lazy[2*(2*node+2)+1]+=lazy[2*node+2];
                lazy[2*(2*node+2)+2]+=lazy[2*node+2];
            }

            lazy[2*node+2]=0;
        }

            st[node]=st[2*node+1]+st[2*node+2];
            /*cout<<st[node]<<" "<<node<<" "<<st[node*2+1]
            <<" "<<st[node*2+2];
            cout<<" P\n";
            */return;
        }
//cout<<"no\n";
        return;

}



void updateTree1(ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val)
{

/*
    for(ll k=0;k<3*n;k++)
        cout<<st[k]<<" ";
    cout<<"\n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                //st[node]=st[2*node+1]+st[2*node+2];
  //              cout<<"h\n";
                return;
            }

        if(lazy[node])
        {
            st[node]*=lazy[node];

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }

        if(ss>=i&&j>=se)
        {
            lazy[node]+=val;
           // cout<<lazy[node]<<" M\n";
    //        cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)

        //cout<<st[node]<<" x\n";
        sum+=st[node];

            return;
        }
//24
       // if(ss<i||se>j)
        {


//st[node]=st[2*node+1]+st[2*node+2];
            ll mid = ss+ (se-ss)/2;
            updateTree(st,node*2+1,ss,mid,i,j,val);
            updateTree(st,node*2+2,mid+1,se,i,j,val);

        if(lazy[2*node+1])
        {
            st[2*node+1]*=lazy[2*node+1];

            if(mid!=ss)
            {
                lazy[2*(2*node+1)+1]+=lazy[2*node+1];
                lazy[2*(2*node+1)+2]+=lazy[2*node+1];
            }

            lazy[2*node+1]=0;
        }

        if(lazy[2*node+2])
        {
            st[2*node+2]*=lazy[2*node+2];

            if(se!=mid+1)
            {
                lazy[2*(2*node+2)+1]+=lazy[2*node+2];
                lazy[2*(2*node+2)+2]+=lazy[2*node+2];
            }

            lazy[2*node+2]=0;
        }

            st[node]=st[2*node+1]+st[2*node+2];
            /*cout<<st[node]<<" "<<node<<" "<<st[node*2+1]
            <<" "<<st[node*2+2];
            cout<<" P\n";
            */return;
        }
//cout<<"no\n";
        return;

}


void updateTree2(ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val)
{

/*
    for(ll k=0;k<3*n;k++)
        cout<<st[k]<<" ";
    cout<<"\n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                //st[node]=st[2*node+1]+st[2*node+2];
  //              cout<<"h\n";
                return;
            }

        if(lazy[node])
        {
            st[node]=lazy[node]*(1+se-ss);

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }

        if(ss>=i&&j>=se)
        {
            lazy[node]+=val;
           // cout<<lazy[node]<<" M\n";
    //        cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)

        //cout<<st[node]<<" x\n";

            return;
        }
//24
       // if(ss<i||se>j)
        {


//st[node]=st[2*node+1]+st[2*node+2];
            ll mid = ss+ (se-ss)/2;
            updateTree(st,node*2+1,ss,mid,i,j,val);
            updateTree(st,node*2+2,mid+1,se,i,j,val);

        if(lazy[2*node+1])
        {
            st[2*node+1]=lazy[2*node+1]*(1+mid-ss);

            if(mid!=ss)
            {
                lazy[2*(2*node+1)+1]+=lazy[2*node+1];
                lazy[2*(2*node+1)+2]+=lazy[2*node+1];
            }

            lazy[2*node+1]=0;
        }

        if(lazy[2*node+2])
        {
            st[2*node+2]=lazy[2*node+2]*(se-mid);

            if(se!=mid+1)
            {
                lazy[2*(2*node+2)+1]+=lazy[2*node+2];
                lazy[2*(2*node+2)+2]+=lazy[2*node+2];
            }

            lazy[2*node+2]=0;
        }

            st[node]=st[2*node+1]+st[2*node+2];
            /*cout<<st[node]<<" "<<node<<" "<<st[node*2+1]
            <<" "<<st[node*2+2];
            cout<<" P\n";
            */return;
        }
//cout<<"no\n";
        return;

}


static ll st[1000000],arr[1000000];
main()
{

    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\mrmoh\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    std::ios::sync_with_stdio(false);
//while(true)
{

    ll n,q;
    cin>>n>>q;

    //memset(lazy,0,sizeof(lazy));

    //ll arr[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        //cout<<lazy[i]<<" ";
    }




    buildTree(st,0,n-1,arr,0);



    for(ll i=0;i<3*n;i++)
        cout<<st[i]<<" ";
    cout<<"\n";


    while(q--)
    {
        ll cs,l,r;
        cin>>cs>>l>>r;
        l--;r--;

        if(cs==1)
        {
            ll v;
            cin>>v;
            updateTree(st,0,0,n-1,l,r,v);
        }

        else if(cs==2)
        {
            ll v;
            cin>>v;
            updateTree1(st,0,0,n-1,l,r,v);

        }

        else if(cs==3)
        {
            ll v;
            cin>>v;
            updateTree2(st,0,0,n-1,l,r,v);
        }
        else if(cs==4)
        {
            sum=0;
            updateTree(st,0,0,n-1,l,r,0);
            cout<<sum<<"\n";

        }
    }

}

}
