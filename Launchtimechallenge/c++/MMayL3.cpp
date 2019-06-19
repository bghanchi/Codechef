
#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define pb push_back
#define em emplace_back
#define mp make_pair
#define mt make_tuple
#define ll long long int

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    else
        gcd(b,a%b);
               
}

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;

        if(gcd(n,k)==1 and gcd(m,k)==1){
            cout<<n*m<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

}   
