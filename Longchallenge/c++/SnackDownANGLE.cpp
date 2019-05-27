/*
Contest:SnackDown19
User: bharat12
Problem: ANGLE

*/

#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define tr1(i,x,n) for(int i=x;i<n;i++)
#define em emplace_back
#define mk make_tuple
#define ll long long int
using namespace std;
typedef vector< int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;


long cons;
inline long check(long a)
{
    if(a>=cons)a%=cons;
    return a;
}
inline long check2(long a)
{
	a%=cons;
	if(a<0)
		a+=cons;
	return a;
}
 
inline long fast_check(long a)
{
	if(a>=cons)
		a-=cons;
	return a;
}
 
long GCD(long a,long b)
{
	while(a && b)
	{
		a=a%b;
		if(a!=0)
			b=b%a;
	}
	return a+b;
}
 
long exp(long a,long n)
{
	long ans=1;
	a=check(a);
	while(n)
	{
		if(n&1)
			ans=check(ans*a);
		a=check(a*a);
		n=(n>>1);
	}
	return ans;
}
 
void print_pair(pair<int,int> p)
{
	cout<<p.x<<" "<<p.y<<endl;
}
 
long nc2(long a)
{
	return (a*(a-1))/2;
}

long nc3(long a)
{
	long b=a*(a-1)*(a-2);
	return b/6;
}


const int N=101;
// const int M=1<<10 ; 

int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	cons=1e9+7;
	srand(time(NULL));
	// freopen("evaluations.in","r",stdin);

	int t;
	cin>>t;

	while(t--)
	{
		vector<pair<long,long>> A;
		vector<long> QA;

		long n,p,q;
		cin>>n>>p>>q;
		A.resize(n);
		QA.resize(n);

		for(int i=0;i<n;i++)
		{
			long x;
			cin>>x;
			// cin>>A[i];
			A[i]={x,i};
			QA[i]=q*x*x;
			// QA[i]=q*A[i]*A[i];
		}
		sort(QA.begin(),QA.end());
		sort(A.begin(),A.end());
		// for(auto itr:QA)
		// 	cout<<itr<<endl;

		long num=-1,denom=-1,x,y,z;

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				long temp=QA[i]+QA[j]-2*p*A[i].x*A[j].x;
				// cout<<i<<" "<<j<<" "<<temp<<endl;
				auto itr=upper_bound(QA.begin(),QA.end(),temp)-QA.begin()-1;
				// cout<<i<<" "<<j<<" "<<itr<<endl;
				for(;itr>=0;itr--)
				{
					if(itr==i || itr==j)
						continue;
					else
						break;
				}
				// cout<<i<<" "<<j<<"after"<<itr<<endl;

				if(itr==-1)
					continue;
				if(abs(A[i].x-A[j].x)>=A[itr].x)
					continue;
				long new_num=A[i].x*A[i].x+A[j].x*A[j].x-A[itr].x*A[itr].x;
				long new_denom=2*A[i].x*A[j].x;
				if(num==-1 || (num*new_denom>new_num*denom))
				{
					num=new_num;
					denom=new_denom;
					x=A[itr].y;
					y=A[i].y;
					z=A[j].y;
				}
			}
		}

		if(num==-1)
			cout<<-1<<"\n";
		else
			cout<<x+1<<" "<<y+1<<" "<<z+1<<"\n";
	}
	


	return 0;
}