/*
User: bharat12
Problem:   HMAPPY2 
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

bool sorrt(pi a,pi b){
    return a.first<b.first;
}

bool sorrt1(pi a,pi b){
    return a.first>b.first;
}

int main(){
  ios_base::sync_with_stdio(false);
  
   ll t;
   cin>>t;
   while(t--){
       ll n,a,b,k;
       cin>>n>>a>>b>>k;

        ll s1=n/a,s2=n/b;
        ll s3=n/(a*b);
        ll count=0,count1=1,count2=0;
        ll f=0;
        if(a==b){
          count=0; 
        }
        else if(a>b and a%b==0){
             count=s2-s1;
        }
        else if(b>a and b%a==0){
            count=s1-s2;;
        }

        else{
           count=s1+s2-s3*2;
        }
        
//        cout<<count<<endl;
        if(count>=k){
            cout<<"Win"<<endl;
        }
        else{
            cout<<"Lose"<<endl;
        }


   }
}
