#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Before insert element"<<nl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<nl;
//     int index,val; cin>>index>>val;
//     n++;
//     for(int i=n-1; i>=index-1; i--){
//         arr[i+1]=arr[i];
//     }
//     arr[index-1]=val;
//     cout<<"After insert element"<<nl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<nl;
    
//     Love_Byte
// }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
    int index; cin>>index;
    for(int i=0; i<n; i++){
        if(i==index-1){
            arr[i]=INT32_MIN;
            break;
        }
    }
    n--;
    for(int i=0; i<n; i++){
        if(arr[i]==INT32_MIN){
            arr[i]=arr[i+1];
            arr[i+1]=INT32_MIN;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
    
    Love_Byte
}



