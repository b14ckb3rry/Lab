// //***********************************//
// //*         MD SIRAJUL ISLAM        *//
// //*      github.com/b14ckb3rry      *//
// //***********************************//

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0

// int part(int arr[], int low, int hi, int p)
// {
//     int j = low, i = low;
//     while(i <= hi){
//         if(arr[i] > p)
//         {
//             i++;
//         }
//         else{
//             swap(arr[i], arr[j]);
//             i++, j++;
//         }
//     }
//     return j - 1;
// }

// void quickSort(int arr[], int low, int hi)
// {
//     if(low < hi) {
//         int p = arr[hi];
//         int pos = part(arr, low, hi, p);
//         quickSort(arr, low, pos-1);
//         quickSort(arr, pos+1, hi);
//     }
// }

// int32_t main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     quickSort(arr, 0, n-1);
//     for(auto x : arr)
//     {
//         cout << x << ' ';
//     }
//     cout << '\n';
    
//     return maru;
// }












#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << '\n';
        for (auto adj_node : adj_list[head]) {
            if (visited[adj_node] == 0) {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    bfs(src);
    return 0;
}
/*
0 --- 1 ---- 2 ----- 3
      |      |
      |      |
      5------4

# of node -> 6
# of edge -> 6

6 6

0 1
2 3
1 5
2 4
5 4
1 2
*/

/*
0 --- 1      2 ----- 3
      |      |
      |      |
      5------4

# of node -> 6
# of edge -> 5

6 5

0 1
2 3
1 5
2 4
5 4
*/