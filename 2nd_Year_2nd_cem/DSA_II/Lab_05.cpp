#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void dfs(int node)
{
    cout << node << endl;
    visited[node] = 1;
    for (int adj_node : adj_list[node]) {
        if (visited[adj_node] == 0) {
            dfs(adj_node);
        }
    }
}

int main() {
    int node, edges;
    cin >> node >> edges;
    for (int i = 0;i < edges;i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src; cin>>src;
    dfs(src);
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0
// const int N = 1e5+7;
// int arr[N];
// void merge(int l, int r, int mid)
// {
//     int leftSize = mid-l+1;
//     int leftArray[leftSize+1];
//     int rightSize = r-(mid+1)+1;
//     int rightArray[rightSize+1];
//     for(int i = l, j = 0; i <= mid; i++, j++)
//     {
//         leftArray[j] = arr[i];
//     }
//     for(int i = mid+1, j = 0; i <= r; i++, j++)
//     {
//         rightArray[j] = arr[i];
//     }
//     leftArray[leftSize] = INT_MAX;
//     rightArray[rightSize] = INT_MAX;
//     int lp = 0, rp = 0;
//     for(int i = l; i <= r; i++)
//     {
//         if(leftArray[lp] <= rightArray[rp])
//         {
//             arr[i] = leftArray[lp];
//             lp++;
//         }
//         else
//         {
//             arr[i] = rightArray[rp];
//             rp++;
//         }
//     }
// }

// void mergeSort(int l, int r)
// {
//     if(l == r) return;
//     int mid = (l + r) / 2;
//     mergeSort(l, mid);
//     mergeSort(mid+1, r);
//     merge(l, r, mid);
// }

// int32_t main()
// {
//     int n; cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     mergeSort(0, n-1);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ' ';
//     }
//     cout << '\n';
    
//     return maru;
// }