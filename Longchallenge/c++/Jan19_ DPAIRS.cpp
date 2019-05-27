/*
User: bharat12
Problem:   DPAIRS
Contest:  january Long Long Challenge
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
  ll n,m;
  cin>>n>>m;

  vector<pi>v;
  vector<pi>v1;
  vi c;
  vector<pi>index;

  for(ll i=0;i<n;i++){
      ll a;
      cin>>a;
      v.em(a,i);
  }

  for(ll j=0;j<m;j++){
      ll a;
      cin>>a;
      v1.em(a,j);
  }

sort(all(v),sorrt);
sort(all(v1),sorrt);

/*
for(auto i:v){
    cout<<i.first<<" ";
}
cout<<endl;

for(auto j:v1){
    cout<<j.first<<" ";
}
cout<<endl;

*/

//  c.pb(min(v[0],v[1]));

  ll i=0,j=0;
  ll count=0;
  while(i<n or j<m){
      if(j==m and i<n){
          for(ll k=i+1;k<n;k++){
            count++;
              ll sum=v[k].first+v1[m-1].first;
//              cout<<k<<" "<<j<<" "<<sum<<endl;
              c.pb(sum);
              index.em(v[k].second,v1[m-1].second);
          }
      
        i=n;
      }
      else if(i==n and j<m){
          for(ll k=j+1;k<m;k++){
            count++;
              ll sum=v[n-1].first+v1[k].first;
//              cout<<i<<" "<<k<<" "<<sum<<endl;
              c.pb(sum);
              index.em(v[n-1].second,v1[k].second);
          }
       
       j=m;
      }
      else{
        count++;
          ll sum;
          if(v[i]<=v1[j]){
              sum=v[i].first+v1[j].first;
//              cout<<i<<" "<<j<<" "<<sum<<endl;
              c.pb(sum);
              index.em(v[i].second,v1[j].second);
              i++;

          }
          else{
              sum=v[i].first+v1[j].first;
//              cout<<i<<" "<<j<<" "<<sum<<endl;
              index.em(v[i].second,v1[j].second);
              c.pb(sum);
              j++;
          }
      }

  }      

//   cout<<count<<endl;
   for(auto i:index){
       cout<<i.first<<" "<<i.second<<endl;
   }
  // cout<<endl;
    //for(auto i:c){
      //  cout<<i<<" ";
    //}
    //cout<<endl;

}

