/*
User: bharat12
Problem: : XYPIZQ 
Contest:  january Long Long Challenge
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

inline void inp( ll &n )
{
   n=0;
   int ch=getchar_unlocked();int sign=1;
   while(ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar_unlocked();}
   while(ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
   n=n*sign;
}

int main(){
  ll t;
  inp(t);
  while(t--){
    ll n,type,x,y,z,num,deno;
    inp(n);inp(type);inp(x);inp(y);inp(z);
    deno = 2*n+1;
    if(type==1){
      if(x<z){
        num = 2*n-y;
      }else if(x==z){
        if(y>x)
          num = y-1;
        else
          num = y+1;
      }else{
        num = 2*n-y+2;
      }
    }else if(type==3){
      if(x<z){
        num = 2*n-y+2;
      }else if(x==z){
        if(y>x)
          num = y-1;
        else
          num = y+1;
      }else{
        num = 2*n-y;
      }
    }else{
      num = 2*n+1-2*y;
    }

    ll gcd = __gcd(num,deno);
    printf("%lld %lld\n",num/gcd,deno/gcd);
  }
  return 0;
}
