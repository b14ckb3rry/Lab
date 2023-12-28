#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

int32_t main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cout<<"Enter size of array : ";
    int n; cin>>n;
    int arr[n];
    cout<<"Take input in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Key to find : ";
    int key; cin>>key;
    bool chk=false;
    int index=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            chk=true;
            index=i;
            break;
        }
    }
    if(chk) cout<<"Found at index "<<index<<nl;
    else cout<<"Not Found"<<nl;

    maru
}








#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

int BinarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

void sortingArray(int arr[], int n){
        for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int32_t main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout<<"Input the size of elements : ";
    int n; cin>>n;
    int arr[n];

    cout<<"Enter the elements here : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to find : ";
    int key; cin>>key;

    // sort(arr, arr+n); //Using built in function
    sortingArray(arr, n); //Using hande made function
    cout<<"After sorting array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
    int index=BinarySearch(arr, n, key);

    if(index==-1) cout<<"Not foud!"<<nl;
    else cout<<"Found at index "<<index<<nl;

    maru
}