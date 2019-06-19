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

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vi v(26,0);
        ll count=0;

        for(int i=0;i<s.length();i++){
              v[s[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(v[i]%2!=0){
                count++;
            }
        }
        
        if(count>=1 and count<=3){
            cout<<"DPS"<<endl;
        }
        else{
            cout<<"!DPS"<<endl;
        }
    }
}