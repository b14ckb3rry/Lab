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


// priority queue sort kore first element er upore vitti kore.




// Enter the number of vertices and edges: 5 7
// Enter the edges in the format (source destination weight):
// 0 1 4
// 0 2 8
// 1 2 2
// 1 3 5
// 2 3 5
// 2 4 9
// 3 4 4
// Enter the source vertex: 0
