/*

User:bharat12

Problem Code: USF
*/

#include<bits/stdc++.h>
#include<string.h>
#include<set>
#define all(c) c.begin(),c.end()
#define allr(c) c.end(),c.begin()
#define tr(i,x,n) for(i=x;x<n?i<n:i>=0;x<n?i++:i--)
#define em emplace_back
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

inline ll gcd(ll a, ll b) { return a ? gcd(b%a, a): b; }
inline ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }

ll  max=1e9;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vi v(n);
    ll  i,max=0,count=0,count1=1;
    tr(i,0,n){
        cin>>v[i];
    }
    for(ll i=2;i<100;i++){
        if(isPrime(i)){
            count=0;
            for(ll j=0;j<n;j++){
                if (v[j]%i==0){
                    count++;
                }

            }
            if(count>max){
                max=count;
            }
            else if(count==max){
                count1++;
            }
        }
    }
    cout<<(max*1)<<"\n";

    }


}