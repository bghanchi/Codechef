/*
User: bharat12
Problem:  MINDSUM 
Contest:  October Long Long Challenge
*/

#include<iostream>
#include<climits>
using namespace std;
typedef long long int ll;
const ll inf=1e18;
ll ans,idx;
ll sum(ll x)
{
	ll t=0;
	while(x)
	{
		t+=(x%10);
		x/=10;
	}
	return t;
}
void solve(ll n,ll d,ll cnt)
{
//	cout<<n<<" "<<d<<" "<<cnt<<endl;
	if(cnt>=15)
	return;
	if((n==ans && cnt<idx) || (n<ans))
	ans=n,idx=cnt;
	solve(n+d,d,cnt+1);
	solve(sum(n),d,cnt+1);
}
int main()
{
	ll t,n,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		ans=LLONG_MAX;
		idx=0;
		solve(n,d,0);
		cout<<ans<<" "<<idx<<"\n";
	}
	return 0;
}
