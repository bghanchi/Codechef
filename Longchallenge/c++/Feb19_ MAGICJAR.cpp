/*
User: bharat12
Problem: MAGICJAR 
Contest:   February long long Challenge
*/



#include<bits/stdc++.h>
#include<string.h>
#include<queue>
#include<vector>
#define all(c)  c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_pair
#define debug(s) cout<<s<<endl;
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;

//ll max=1e9;c

int main(){
  ios_base::sync_with_stdio(false);
  
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       ll min1=1e9,max1=0;
       for(ll i=0;i<n;i++){
           ll a;
           cin>>a;
           min1=min(min1,a);
           max1=max(max1,a);
       }

       if(min1==max1){
           cout<<max1<<endl;
       }
       else{
       cout<<max(min1+n-1,max1)<<endl;
       }


   }
}   
