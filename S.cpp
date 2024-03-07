// DFS
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    cout << node << '\n';
    vis[node]=true;
    for(int x : adj[node]){
        if(vis[x] == false){
            dfs(x);
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src;
    cin>>src;
    dfs(src);
}
*/



// BFS
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int dis[N];
bool vis[N];
vector<int>adj[N];

void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node] = true;
    dis[node] = 0;

    while(!q.empty()){
        int p = q.front();
        q.pop();
        cout << p << '\n';

        for(int i=0; i<adj[p].size(); i++){
            int child = adj[p][i];
            if(vis[child]==false){
                q.push(child);
                dis[child] = dis[p] + 1;
                vis[child] = true;
            }
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    for(int i=1; i<=n; i++){
        cout << "Node : " << i << " " << dis[i] << '\n';
    }
}
*/



// Balance
/*
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s; cin>>s;
    stack<char>st;
    char ch;
    bool flag=true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
            continue;
        }
        if(st.empty()){
            flag=false;
        }
        switch(s[i]){
            case ')':
                ch=st.top();
                st.pop();
                if(ch=='{' || ch=='['){
                    flag=false;
                }
                break;
            case '}':
                ch=st.top();
                st.pop();
                if(ch=='(' || ch=='['){
                    flag=false;
                }
                break;
            case ']':
                ch=st.top();
                st.pop();
                if(ch=='(' || ch=='{'){
                    flag=false;
                }
                break;
        }
    }
    cout << (flag ? "Balance" : "Not balance");
}
*/



// Diakstra
/*
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<pair<int, int>> v[N];
int dis[N];
void dijkstra(int s)
{
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        int parant = q.front();
        q.pop();
        for (int i = 0; i < v[parant].size(); i++)
        {
            pair<int, int> child = v[parant][i];
            int childNode = child.first;
            int childCost = child.second;
            if (dis[parant] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parant] + childCost;
                q.push(childNode);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].emplace_back(b, w);
        v[b].emplace_back(a, w);
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << "Node : " << i << " " << dis[i] << '\n';
    }
}
*/


// Kruskal
/*
#include <bits/stdc++.h>
using namespace std;
class Edge {
    public: int a, b, w;
    Edge(int a, int b, int w) {
        this -> a = a;
        this -> b = b;
        this -> w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
void dsu_set(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int node) {
    while (parent[node] != -1) {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b) {
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB) {
        if (parentSize[leaderA] > parentSize[leaderB]) {
            // A leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        } else {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;
    vector < Edge > v;
    vector < Edge > ans;
    dsu_set(n);
    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    sort(v.begin(), v.end(), cmp);
    for (Edge val: v) {
        int a = val.a;
        int b = val.b;
        int w = val.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
            continue;
        ans.push_back(val);
        dsu_union(a, b);
    }
    for (Edge val: ans) {
        cout << val.a << " " << val.b << " " << val.w << endl;
    }
    return 0;
}
/*


