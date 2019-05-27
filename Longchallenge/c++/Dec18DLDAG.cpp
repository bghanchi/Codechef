/*
User: bharat12
Problem: DLDAG 
Contest:  December Long Long Challenge
*/

#include <bits/stdc++.h>

#define N 1000001

std::vector<int> adj[N];
int outdegree[N];
int  indegree[N];
std::vector<int> parents[N];

inline void init(int n)
{
    std::memset(indegree,  0, sizeof(int) * N);
    std::memset(outdegree, 0, sizeof(int) * N);
}

std::list<int> kahn_top_sort(int n)
{
    std::queue<int> q;
    
    for (int i = 1; i <= n; ++i)
        if (indegree[i] == 0)
            q.push(i);
        
    std::list<int> top_order;
    
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        top_order.push_back(u);
 
        for (auto& elem : adj[u])
        {
            --indegree[elem];
            
            if (indegree[elem] == 0)
                q.push(elem);
        }
    }
    
    return top_order;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n, m;
    std::cin >> n >> m;
    
    init(n);
    
    while (m--)
    {
        int u, v;
        std::cin >> u >> v;
        
        adj[u].push_back(v);
        outdegree[u]++;
        indegree[v]++;
        parents[v].push_back(u);
    }
    
    auto tmp = kahn_top_sort(n);
    
    /*
    for (auto& elem : tmp) std::printf("%d ", elem);
    std::printf("\n");
    for (auto& elem : tmp) std::printf("%d ", indegree[elem]);
    std::printf("\n");
    for (auto& elem : tmp) std::printf("%d ", outdegree[elem]);
    std::printf("\n");
    */
    
    std::vector<std::string> ans;
    ans.reserve(n+1);
    
    while (tmp.size() > 0)
    {        
        // find first with outdegree == 0
        int a1;
        
        for (auto it = tmp.rbegin(); it != tmp.rend(); ++it)
            if (outdegree[*it] == 0)
            {
                a1 = *it;
                tmp.erase(std::next(it).base());
                break;
            }
        
        // Try to find another one with outdegree 0
        int a2 = -1;
        for (auto it = tmp.rbegin(); it != tmp.rend(); ++it)
            if (outdegree[*it] == 0)
            {
                a2 = *it;
                tmp.erase(std::next(it).base());
                break;
            }
        
        
        if (a2 != -1)
        {            
            ans.push_back("2 " + std::to_string(a2) + " " + std::to_string(a1));
            
            for (auto& elem: parents[a2])
                outdegree[elem]--;
        }
        else
        {
            ans.push_back("1 " + std::to_string(a1));
        }
        
        for (auto& elem: parents[a1])
            outdegree[elem]--;
    }
    
    std::cout << ans.size() << "\n";
    
    for (auto& elem: ans)
        std::cout << elem << "\n";
    
    return 0;
}


