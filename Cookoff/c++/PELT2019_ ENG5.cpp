/*
User: bharat12
Problem:  ENG5 
Contest:   Plinth-Enigma'19 LNMIIT Techfest Challenge
*/




#include <bits/stdc++.h>
#define mod 998244353
#define pb push_back
#define ll long long
#define ld long double
#define ft first
#define sd second
using namespace std;


const int N = 1e5 + 9;
int a[N], n, m, f[22];
int dp[1 << 20], cnt[N][22];

int solve(int msk, int ind) {
    int& ret = dp[msk];
    if(ret != -1) return ret;
    if(__builtin_popcount(msk) == m) return ret = 0;
    ret = n;
    for(int i = 0; i < m; i++) {
        if(~(msk >> i) & 1) {
            ret = min(ret, f[i] - cnt[ind+f[i]-1][i] + cnt[ind-1][i] + solve(msk ^ (1 << i), ind + f[i]));
        }
    }
    return ret;
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i]; a[i]--;
        f[a[i]]++;
        for(int j = 0; j < m; j++) {
            cnt[i][j] = cnt[i-1][j];
        }
        cnt[i][a[i]]++;
    }

    memset(dp, -1, sizeof dp);
    cout << solve(0, 1);


    return 0;
}