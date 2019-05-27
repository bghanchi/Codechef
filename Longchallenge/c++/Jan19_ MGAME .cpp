/*
User: bharat12
Problem: MGAME 
Contest:  january Long Long Challenge
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


ll premutation(ll n,ll r){
    ll count=1;
    if(n>=r){
    for(ll i=n-r+1;i<=n;i++){
        count*=i;
    }
    return count;

    }
    else{
        return 0;
    }
}

ll combinatory(ll n,ll r){
    ll count=1;
    ll count2=1;
    if(n>=r){
    for(ll i=n-r+1;i<=n;i++){
        count*=i;
    }
    for(ll i=1;i<=r;i++){
        count2*=i;

    }
     
//     cout<<count<<" "<<count2<<endl;
    return (count/count2);

    }
    else{
        return 0;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;

//        ll max1=0;


        ll max1=0;
        if(p>=((n/2)+1)){
            max1=n-((n/2)+1);
        }
        else{
        for(ll i=1;i<=p;i++){
             max1=max(max1,(n%i)%n);
 //            v[max1].pb(i);

        }

        }
          
         ll count=0;


        if(max1==0){
            if(p<3){
                if(p==2){
                count=8;

                }
                else{
                    count=1;
                }
            }
            else{
            count+=premutation(p,3)+p;
  //          cout<<count<<endl;
            count+=combinatory(p,2)*6;
    //        cout<<count<<endl;

            }
        }
        
        else{
            if(p>=((n/2)+1)){
                    count+=premutation((p-max1),2)+(p-max1);

                    if(p>n){
                        count+=(p-n)*(p-max1);
                    }

                    if(p>n){
                        count+=premutation((p-n),2)+(p-n);
                    }
            }
            else{
                for(ll i=1;i<=p/2;i++){
                    if((n%i)%n==max1){
                        count+=premutation((p-max1),2)+(p-max1);

                        if(p>n){
                            count+=(p-n)*(p-max1);
                        }

                        if(p>n){
                            count+=premutation((p-n),2)+(p-n);
                        }
                    }
                }  

            }



        }








         cout<<count<<endl; 
//        cout<<v[max1]<<endl;


    }

}    

/*

        for(ll i=1;i<=p;i++){
            for(ll j=1;j<=p;j++){
                for(ll k=1;k<=p;k++){
                    ll index=(((n%i)%j)%k)%n;
                    //cout<<index<<" ";
                    if(index==max1){
                        count++;
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
//                      max1=max(index,max1);
  //                    v[index]+=1;
                }
            }
        }




*/

/*

            if((((n%i)%n==max1)){
//1             
               cout<<"hello bharat kumar"<<" "; 
                ll a=p-max1;
                cout<<i<<" ";
                while(a>(a-2)){
                    count1*=a;
                    a--;
                }
                count+=(p-max1);
                count+=count1;
                count1=1;

//2
                ll k=0;
                k=(n-2)*(n-max1);
                if(n>i){
                    k--;
                }
                count+=k;


//3                 
                k=0;
                k=(n-2);
                if(n>i){
                    k--;
                } 

                if (k>2){
                    ll a1=k;
                    while(a1>a-2){
                        count1*=a1;
                        a1--;
                    }
                    count+=count1;
                    count+=k;
                }
                else{
                count+=k;

                }




            }


*/
/*

        for(ll i=1;i<=p;i++){
            for(ll j=1;j<=p;j++){
                for(ll k=1;k<=p;k++){
                    ll index=(((n%i)%j)%k)%n;
                    //cout<<index<<" ";
                    if(index==max1){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
//                      max1=max(index,max1);
  //                    v[index]+=1;
                }
            }
        }


*/

/*

        for(ll i=1;i<=p;i++){
            for(ll j=1;j<=p;j++){
                for(ll k=1;k<=p;k++){
                    ll index=(((n%i)%j)%k)%n;
                    //cout<<index<<" ";
                      max1=max(index,max1);
                      v[index]+=1;
                }
            }
        }

*/

/*

               while(a>a-2){
                   count1*=a;
                    //a-=1;
                }

*/