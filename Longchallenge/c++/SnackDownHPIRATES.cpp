/*
Contest:SnackDown19
User: bharat12
Problem: HPIRATES

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

int done[111];
int flg ;

vector< vector<int> > g;
void chk(int root,int parent){

}
vector<string> dfs(int root,int parent,int color){
    if( done[root] ){
        flg = 0;
        cout << -1 << endl;
        exit(0);
    }
    done[root] = 1;

    vector< vector<string> > board;
    for(int e : g[root] ){
        if( e == parent ) continue;
        board.push_back(dfs(e, root, color ^ 1));
    }
    if( board.size() == 0 ){
        return vector<string>(1, string(1, '0' + color));
    }
    int w = 1;
    int h = 0;
    for( auto b : board ){
        w += b[0].size();
        w += 1;
        h = max<int>(h, b.size());
    }
    h += 2;

    vector<string> res(h, string(w, '0' + color));
    int offset = 1;
    for( auto b : board ){
        for(int i = 0 ; i < b.size() ; i++){
            for(int j = 0 ; j < b[0].size() ; j++){
                res[1 + i][j + offset] = b[i][j];
            }
        }
        offset += b[0].size();
        offset += 1;
    }
    return std::move(res);
}

void solve(){
    int N, M;
    cin >> N >> M;

    if( M != N-1 ){
        cout << -1 << endl;
        return;
    }


    g.clear();
    g.resize(N);
    memset(done, 0, sizeof(done));
    
    for(int i = 0 ; i < M ; i++){
        int u,v;
        cin >> u >> v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    flg = 1;
    auto x = dfs(0, -1, 0);

    if(!flg){
        cout << -1 << endl;
        return;
    }
    for(int i = 0 ; i < N ; i++){
        if( !done[i]){
            cout << -1 << endl;
            return;
        }
    }

    cout << x.size() << " " << x[0].size() << endl;
    for(auto w : x){
        cout << w << endl;
    }

}

int main() {
    solve();
    
}