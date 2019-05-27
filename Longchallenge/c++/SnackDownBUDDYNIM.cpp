/*
Contest:SnackDown19
User: bharat12
Problem: BUDDYNIM

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
    cin >> t;
    for(int j=0;j<t;j++)
    {
        int n,m;
        cin >> n >> m;
        int a[n+2];
        int b[m+2];
        for(int k=0;k<n;k++)
        {
            cin >> a[k];
        }
        for(int k=0;k<m;k++)
        {
            cin >> b[k];
        }
        int ans = a[0];
        for(int k=1;k<n;k++)
        {
            ans = ans^a[k];
        }
        for(int k=0;k<m;k++)
        {
            ans = ans^b[k];
        }
        if(ans != 0)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
    return 0;
 }
