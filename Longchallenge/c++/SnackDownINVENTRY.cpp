/*
Contest:SnackDown19
User: bharat12
Problem: INVENTRY

*/

#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define tr1(i,x,n) for(int i=x;i<n;i++)
#define em emplace_back
#define mk make_tuple
#define ll long long int
using namespace std;
typedef vector< int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;


int main(){
 ios_base::sync_with_stdio(false);
    int t;
    char ch;
    for(cin>>t;t>0;t--) {
        int n;
        cin>>n;
        int cont=0;
        int gap=0;
        ll ans=0;
        int pos=1;
        for(int i=1;i<=n;i++) {
            cin>>ch;
            if(ch=='#') {
                if(cont==0)
                    gap=0;
                if(pos!=i)
                    cont++;
                ans+=(i-pos)+2*max(cont-gap-1,0);
                // cout<<ans<<endl;
                if(gap==-1)
                    gap=0;
                pos++;
            }
            if(ch=='.') {
                gap++;
                if(cont<=gap) {
                    gap=0;
                    cont=0;
                }
            }

        }
        // cout<<endl<<"a";
        if(cont>gap)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;

    } 
}
