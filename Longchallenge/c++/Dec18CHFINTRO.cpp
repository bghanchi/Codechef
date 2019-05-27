/*
User: bharat12
Problem:  CHFINTRO 
Contest:  December Long Long Challenge
*/


#include<bits/stdc++.h>
#include<string.h>
#define all(c)  c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_pair
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll max=1e9;

int  main(){
    ios_base::sync_with_stdio(false);
    ll N,r;
    cin>>N>>r;
    while(N--){
        ll R;
        cin>>R;
        if(R<r){
            cout<<"Bad boi"<<"\n";
        }
        else{
            cout<<"Good boi"<<"\n";
        }
    }
}