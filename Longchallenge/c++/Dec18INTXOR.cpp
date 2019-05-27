/*
User: bharat12
Problem: INTXOR  
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


int main(){
    ios_base::sync_with_stdio(false);
    ll f1=0;

    ll t;
    cin>>t;
    ll t1=t;
    while(t--){
        ll n;
        cin>>n;
        ll count=1;
        ll n1=n;
        ll start=0;
        ll f=0;
        ll a=1e9;
//        cout<<a<<endl;
        if(t1<30){

        while(n1--){
          
          cout<<1<<" "<<1<<" "<<2<<" "<<3<<endl;
          
          ll r;
          cin>>r;
          if(r!=-1){

                for(ll i=1;i<=a-2;i++){
                    ll xr=i^(i+1)^(i+2);
                    if(xr==r){
//                       cout<<i<<" ";
                        start=i;
                        f++;
                        break;
                    }
                }  

//               cout<<endl;
            
                  break;

                  }


        }//while(n--)
 
       cout<<2<<" ";
       for(ll i=start;i<start+n;i++){
           cout<<i<<" ";
       }
       cout<<endl;
 
      ll r1;
      cin>>r1;
      if(r1==-1){
          break;
      }
 



        }//if

    }//while(t--)

    }


/*
    if(f1<=2){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll count=1;
        ll n1=n;
        ll start=0;
        ll f=0;
        ll a=1e9;
        vi v(n);
//        cout<<a<<endl;
        while(n1--){
          
          cout<<1<<" "<<count<<" "<<count<<" "<<count<<endl;
          
          ll r;
          cin>>r;
           v[count]=r;
          
           count++;
          }

 
        cout<<2<<" ";
        for(ll i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    
        ll r1;
        cin>>r1;
        if(r1==-1){
            break;
        }


        }
 
    f1++;
    


    }


*/

/*
          if(r!=-1){

            for(ll i=1;i<=a-2;i++){
                ll xr=i^(i+1)^(i+2);
                if(xr==r){
//                    cout<<i<<" ";
                    start=i;
                    f++;
                    break;
                }
            }  

//           cout<<endl;
         
           break;

*/


/*
          if(f!=0){
              break;
          }
//          cout<<f<<endl;
   
           count++;

*/

