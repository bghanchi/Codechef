/*
User: bharat12
Problem: MAXEP
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
    ll n,c;
    cin>>n>>c;
    ll total=0;
    ll y=n;
    ll x=0,min1=1e9;
    vi v;
    ll f=0;
    ll i=1,j=n;
    ll count=1,coins=1000;
    ll maxx=1,minn=n;
if(n>148000 ){
    while(coins>0 and count<=n){
        ll a;
        y=count;
        cout<<1<<" "<<y<<endl;
        cin>>a;

        if(a==1){
            coins-=c;
//            min1=min(min1,y);
            cout<<2<<endl;
            
            if(y==1){
                min1=y;
                break;
            }
            else{

                min1=y;
                i=y+1-800;
                j=count;

                while(i<=j){
                        ll mid=(i+j)/2;
                        y=mid;
                        cout<<1<<" "<<y<<endl;
                        cin>>a;

                        if(a==1){
                            j=mid-1;
                            min1=y;
                            minn=min1;
                            coins-=c;
                            cout<<2<<endl;
                            
                        if((minn-maxx)<=coins){
                            for(ll p=maxx+1;p<minn;p++){
                            cout<<1<<" "<<p<<endl;
                            cin>>a;
                            if(a==1){
                                min1=p;
                                f++;
                            cout<<2<<endl;

                                break;
                                }

                            }
                    }

                    if(f!=0){
                        break;
                    }


                    }
                    
                    else{
                            i=mid+1;
                            coins--;
                            maxx=y;

                            if(mid+1==min1){
                                break;
                            }

                        if((minn-maxx)<=coins){
                            for(ll p=maxx+1;p<minn;p++){
                            cout<<1<<" "<<p<<endl;
                            cin>>a;
                            if(a==1){
                                min1=p;
                                f++;
                            cout<<2<<endl;

                                break;
                            }


                            }
                    }


                if(f!=0){
                    break;
                }



                    }
                }
                

            }

            break;
        } 
        else if(a==0){
            coins--;
            count+=800;
            if(count>n){
                count=n;
            }


        }

        if(f!=0){
            break;
        }
    }
        
        cout<<3<<" "<<min1<<endl;


    }

    else{

    while(coins>0 and count<=n){
        ll a;
        y=count;
        cout<<1<<" "<<y<<endl;
        cin>>a;

        if(a==1){
            coins-=c;
//            min1=min(min1,y);
            cout<<2<<endl;
            
            if(y==1){
                min1=y;
                break;
            }
            else{

                min1=y;
                i=y+1-700;
                j=count;

                while(i<=j){
                        ll mid=(i+j)/2;
                        y=mid;
                        cout<<1<<" "<<y<<endl;
                        cin>>a;

                        if(a==1){
                            j=mid-1;
                            min1=y;
                            minn=min1;
                            coins-=c;
                            cout<<2<<endl;
                            
                        if((minn-maxx)<=coins){
                            for(ll p=maxx+1;p<minn;p++){
                            cout<<1<<" "<<p<<endl;
                            cin>>a;
                            if(a==1){
                                min1=p;
                                f++;
                            cout<<2<<endl;

                                break;
                                }

                            }
                    }

                    if(f!=0){
                        break;
                    }


                    }
                    
                    else{
                            i=mid+1;
                            coins--;
                            maxx=y;

                            if(mid+1==min1){
                                break;
                            }

                        if((minn-maxx)<=coins){
                            for(ll p=maxx+1;p<minn;p++){
                            cout<<1<<" "<<p<<endl;
                            cin>>a;
                            if(a==1){
                                min1=p;
                                f++;
                            cout<<2<<endl;

                                break;
                            }


                            }
                    }


                if(f!=0){
                    break;
                }



                    }
                }
                

            }

            break;
        } 
        else if(a==0){
            coins--;
            count+=700;
            if(count>n){
                count=n;
            }


        }

        if(f!=0){
            break;
        }
    }
        
        cout<<3<<" "<<min1<<endl;
        
    }

}


