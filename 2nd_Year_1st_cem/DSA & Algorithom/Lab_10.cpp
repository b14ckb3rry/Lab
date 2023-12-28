// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// void merge(int a[],int l,int m,int r){
//     int leftSize = m-l+1;
//     int rightSize = r-m;
//     int L[leftSize],R[rightSize];
//     int k=0;
//     for(int i=l;i<=m;i++){
//         L[k]=a[i];
//         k++;
//     }
//     k=0;
//     for(int i=m+1;i<=r;i++){
//         R[k]=a[i];
//         k++;
//     }
//     int i=0,j=0;
//     int cur=l;
//     while(i<leftSize && j<rightSize){
//         if(L[i] <= R[j]){
//             a[cur]=L[i];
//             i++;
//         }
//         else {
//             a[cur]=R[j];
//             j++;
//         }
//         cur++;
//     }
//     while(i<leftSize){
//         a[cur]=L[i];
//         i++;
//         cur++;
//     }
//     while(j<rightSize){
//         a[cur]=R[j];
//         j++;
//         cur++;
//     }
// }
// void merge_sort(int a[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         merge_sort(a,l,mid);
//         merge_sort(a,mid+1,r);
//         merge(a,l,mid,r);
//     }
// }
// int main()
// {
//     int n; 
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     merge_sort(a,0,n-1);
//     for(auto x:arr){
//         cout<<x<<" ";
//     }
//     return maru
// }








// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// int partition(int a[], int s, int e){
//     int pivot = a[e];
//     int i = (s - 1);
//     for(int j = s; j <= e - 1; j++){
//         if(a[j] < pivot){
//             i++;
//             swap(a[i] , a[j]);
//         }
//     }
//     swap(a[i+1] , a[e]);
//     return (i + 1);
// }

// void quickSort(int a[], int s, int e){
//     if(s < e){
//         int p = partition(a, s, e);
//         quickSort(a, s, p - 1);
//         quickSort(a, p + 1, e);
//     }
// }

// int main(){   
//     int n; cin >> n;
//     int arr[n];
//     for(int i = 0; i < n ; i++){
//         cin >> arr[i] ;
//     }
//     quickSort(arr, 0, n - 1);  
//     for(auto x : arr){
//         cout<<x<<" ";
//     }
//     cout<<'\n';

//     return maru
// }






// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     vector<int> adj[n + 1];
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         cout << "Index " << i << ": ";
//         for (int j = 0; j < adj[i].size(); j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




//Adjacency Matrix
#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int main(){
    int n,e;
    cin>>n>>e;
    int adj[n+1][n+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            adj[i][j]=0;
        }
    }

    while(e--){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<'\n';
    }

    return maru
}

