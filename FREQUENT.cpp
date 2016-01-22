#include <bits/stdc++.h>
#define long long int ll;
using namespace std;

vector<vector<int> > vec;
int freq[100],val[100];
int tree[200],brk[200];
int st[200],ed[200];
int change[200];
std::vector<int> v;
int changed = 1,k=0;

void buildTree(int node,int i,int j)
{

	if(i>j)
		return;

	if(i==j)
	{
		freq[node] = 1;
/*		cout<<i<<"=i j="<<j<<"\n";
		cout<<freq[node]<<"\n\n";
*/		return;
	}

	buildTree(node*2+1,i,(i+j)/2);
	buildTree(node*2+2,1+(i+j)/2,j);

	int start=0,end=0;

	if(change[(i+j)/2]==change[1+(i+j)/2])
	{
		start = st[(i+j)/2];
		end = ed[(i+j)/2];

		start = max(start,i);
		end = min(end,j);
//		cout<<"changed"<<"\n";
	}

	freq[node] = max(max(freq[2*node+1],freq[2*node+2]),end-start+1);

	/*cout<<i<<"=i sum j="<<j<<"\n";
	cout<<freq[node]<<"\n\n";
	*/
return;
}

int query(int node,int stt,int edd,int i,int j)
{
//	cout<<stt<<"=i j="<<edd<<"\n";

	if(i==stt and edd==j)
	{	
/*		cout<<stt<<"=i j="<<edd<<"\n";
		cout<<"added\n";
		cout<<freq[node]<<"\n\n";
*/		v[k++]=freq[node];
		return freq[node];
		}

	if(stt>edd or stt>j or edd<i)
		return 0;

	int q1 = query(2*node+1,stt,(stt+edd)/2,i,j);
	int q2 = query(2*node+2,1+(stt+edd)/2,edd,i,j);

	int start=0,end=0;

	if(change[(stt+edd)/2]==change[1+(stt+edd)/2])
	{
		start = st[(stt+edd)/2];
		end = ed[(stt+edd)/2];

		start = max(start,stt);
		end = min(end,edd);
//		cout<<"changed\n";

		if(i<=(stt+edd)/2 and j>=(stt+edd)/2
		 and i<=1+(stt+edd)/2 and 1+(stt+edd)/2<=j)
			{
//				cout<<i<<" "<<j<<"\n";
//				cout<<(stt+edd)/2<<" "<<1+(stt+edd)/2<<" qweqw\n";
//				cout<<stt<<" "<<edd<<" sdfds\n";
				changed = end-start+1;}
	}

/*	cout<<stt<<"=i j="<<edd<<"\n";
	cout<<max(max(q1,q2),end-start+1)<<"\n\n";
*/
	return max(max(q1,q2),end-start+1);
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);

	int n,q;
	cin>>n>>q;

	cin>>val[0];

	brk[0] = 1;
	st[0] = 0;
	ed[n-1] = n-1;
	v.push_back(1);
	v.push_back(1);

	int start=0,end=n-1;
	cout<<st[0]<<" ";
	for(int i=1;i<n;i++)
	{
		cin>>val[i];
		if(val[i]!=val[i-1])
		{
			brk[i]=1;
			start = i;

		}
		
		st[i]=start;
		cout<<st[i]<<" ";
	}

	for(int i=n-2;i>-1;i--)
	{
		if(val[i]!=val[i+1])
		{
			end = i;
		}
		
		ed[i]=end;
	}
	cout<<"\n";

	for(int i=0;i<n;i++)
		cout<<ed[i]<<" ";
	cout<<"\n";

	int sum = 0;
	for(int i=0;i<n;i++)
	{
		if(brk[i])
			sum=0;
		sum++;
		cout<<sum<<" ";
	}
	cout<<"\n";
	sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=brk[i];
		cout<<sum<<" ";
		change[i]=sum;
	}
	buildTree(0,0,n-1);
	cout<<"\n";

	while(q--)
	{
		int l,r;
		cin>>l>>r;
		l--;r--;
		k=0;
		changed = 1;
		query(0,0,n-1,l,r);

/*	cout<<l<<"=l r="<<r<<"\n\n";
	cout<<query(0,0,n-1,l,r)<<"\n";
	cout<<"next\n\n\n";
	cout<<"ANSWEREWREWREWR\n";
*/
cout<<	max(max(v[0],v[1]),changed)<<"\n";
//cout<<v[0]<<" "<<v[1]<<" "<<changed<<"\n";
//cout<<"\n\n\n\n";
	}

}