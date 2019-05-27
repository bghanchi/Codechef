/*
User: bharat12
Problem: EARTSEQ
Contest: january Long Long challenge

*/
#include<bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<n;i++)
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

ll int primes[2000];
void Sieve(ll int n) 
{ 
     ll int j=0;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    {  
        if (prime[p] == true ) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
      
      for (int p=2; p<=n; p++) 
       if (prime[p]) 
          primes[j++]=p;
  
} 


int main()
{
  ios_base::sync_with_stdio(false); 
  Sieve(17390);


ll int t;
cin>>t;
while(t--)
{

  ll int n;
  cin>>n;

  ll int last=2,count=0,star=0;

   for(ll int j=0;;j++)
   {
      star+=j;
         for(ll int k=0;k<=j;k++)
         {
           // cout<<endl<<k+j+star<<" "<<last<<"    ";
             for(ll int i=0;i+j+k+star<2000;i++)
             {
               if(i+j+k==0)
                 continue;
               else
               { 
                   cout<<last*primes[i+j+k+star]<<" ";
                   last=primes[i+j+k+star];
                   count++;
                   i+=j;
                  if(count==n-1)
                     goto out;
               }
             }
         }
   }
    
  out:

  cout<<last*2<<endl;
}
}


