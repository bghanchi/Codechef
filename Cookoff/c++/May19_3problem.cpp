#include<bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp make_pair

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;


int main()
{
     ll t;
     cin>>t;
     while(t--){
        ll l,r,g;
        cin>>l>>r>>g;

        ll count=r/g-(l-1)/g;
        if(count!=1){
            cout<<count<<endl;
        }
        else{
            if(g>=l and g<=r){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }

        }
     }

}