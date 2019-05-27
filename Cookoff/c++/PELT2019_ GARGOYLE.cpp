/*
User: bharat12
Problem:GARGOYLE
Contest:   Plinth-Enigma'19 LNMIIT Techfest Challenge
*/
#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define ll logn long int
#define  em emplace_back
#define pb push_back

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;


int main()
{
    long long n;
    scanf("%lld",&n);
    int z=2*n+1;
    char str[n+1][z];
    scanf("\n");
    for(int i=0;i<n;i++)
    {
        gets(str[i]);
    }
    int d=0,count=0,flag=0;
    for(int i=0;i<n;i++)
    {
        d=0,flag=0;
        for(int j=0;j<n;j++)
        {
            if(str[i][j*2]=='T')
            {
                if(strcmp(str[i],str[j])!=0)
                {
                    flag=1;
                    break;
                }
                else
                d++;
            }
        }
        if(flag==0)
        {
            count+=d;
            break;
        }
    }
    printf("%d\n",count);
    
}
