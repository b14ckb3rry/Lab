
// //Buble sort
// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru return 0;

// void bubbleSort(int a[],int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n-i; j++) {
//            if(a[j]>a[j+1]) {
//                swap(a[j],a[j+1]);
//             }            
//         }
//     }
// }

// int32_t main()
// {
//     //ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     cout<<"Bubble Sort"<<nl;
//     cout<<"Enter the size of array : ";
//     int n; cin>>n;
//     int arr[n];
//     cout<<nl<<"Enter the value of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     bubbleSort(arr,n);
//     cout<<"After sorting the array is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<nl;
    
//     maru
// }



// // Selection Sort
// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru return 0;

// void selectionSort(int arr[],int n){
//     for(int i=0 ; i<n-1; i++) {
//         int index=i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]) i=j;
//         }
//         swap(arr[index],arr[i]);
//     }
// }

// int32_t main()
// {
//     //ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     cout<<"Selection Sort"<<nl;
//     cout<<"Enter the size of array : ";
//     int n; cin>>n;
//     int arr[n];
//     cout<<nl<<"Enter the value of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     selectionSort(arr,n);
//     cout<<"After sorting the array is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<nl;

//     maru
// }




// //Insertion Sort
// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru return 0;

// void insertion_sort(int arr[],int n) {
//     for(int i=1; i<n; i++){
//         int val=arr[i];
//         int j=i;
//         while(j>0 && arr[i-1]>val) {
//             arr[j]=arr[j-1];
//             j--;
//         }
//         arr[j]=val;
//     }
// }

// int32_t main()
// {
//     //ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     cout<<"Insrtion Sort"<<nl;
//     cout<<"Enter the size of array : ";
//     int n; cin>>n;
//     int arr[n];
//     cout<<nl<<"Enter the value of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     insertion_sort(arr,n);
//     cout<<"After sorting the array is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<nl;

//     maru
// }


// Counting sort in C++ programming

#include <iostream>
using namespace std;

void countSort(int array[], int size) {
  // The size of count must be at least the (max+1) but
  // we cannot assign declare it as int count(max+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int output[10];
  int count[10];
  int max = array[0];

  // Find the largest element of the array
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countSort(array, n);
  printArray(array, n);
}