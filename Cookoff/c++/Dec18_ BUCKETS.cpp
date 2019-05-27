/*
User: bharat12
Problem:BUCKETS 
Contest:   December Launchtime Challenge
*/

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define ll long long int
#define em emplace_back
#define mt make_tuple
#define uint unsigned int
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;


const uint MAX_NK = 1000;
uint data[MAX_NK + 2][MAX_NK + 2];

uint ballsCount[MAX_NK + 2];
double dp[MAX_NK + 2][MAX_NK + 2];

uint N, K;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N >> K;
    for(uint i = 1; i <= N; i++)
    {
        for(uint k = 1; k <= K; k++)
        {
            cin >> data[i][k];
            ballsCount[i] += data[i][k];
        }
    }

    for(uint k = 1; k <= K; k++)
        dp[1][k] = double(data[1][k]) / ballsCount[1];

    for(uint i = 2; i <= N; i++)
    {
        for(uint k = 1; k <= K; k++)
        {
            dp[i][k] = dp[i-1][k] * (data[i][k] + 1) + (1.0 - dp[i-1][k]) * data[i][k];
            dp[i][k] /= ballsCount[i] + 1;
        }
    }

    for(uint k = 1; k <= K; k++)
        cout << dp[N][k] << " ";

    return 0;
}

