// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;
// const int N=3;

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     vector<int>A(N);
//     for(int i=0; i<N; i++){
//         cin>>A[i];
//     }
//     vector<int>B(N);
//     for(int i=0; i<N; i++){
//         cin>>B[i];
//     }
//     for(int i=0; i<N; i++){
//         swap(A[i], B[i]);
//     }
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());
//     reverse(B.begin(), B.end());

//     cout<<'\n';
//     for(auto v:A) cout<<v<<" ";
//     vector<int>C(N);
//     C=A;
//     cout<<'\n';
//     B.insert(B.begin()+1, 100);
//     for(auto x:B) cout<<x<<" ";
//     cout<<'\n';
//     A.clear();
//     C.pop_back();
//     for(auto y:C) cout<<y<<" ";
    
//     return maru
// }



//Exception Handalling

// 1. Arithmatic Acception
// 2. String index out of bound expection
// 3. Array index out of bound exception
// 4. Number format exception
// 5. File not found exception
// 6. Class not found exception
// 7. No such mathode exception

// try, catch and throw


// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int p,x,y; cin>>p>>x>>y;
//     int z=x-y;
//     int r=p/z;
//     try{
//         if(z==0) cout<<"Access granted\n";
//         else throw(z);
//     }
//     catch(int n){
//         cout<<"Exception found\n";
//     }
    
//     return maru
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     try{
//         throw 'A';
//     }
//     catch(int x){
//         cout<<"Found : "<<x<<'\n';
//     }
//     catch(...){
//         cout<<"Default Exception\n";
//     }
    
//     return maru
// }







// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// void devide(int x, int y, int z){
//     // cout<<"Inside the function\n";
//     if((x-y)!=0){
//         // int r=z/x-y;
//         cout<<"Result : "<<z/(x-y)<<'\n';
//     }
//     else{
//         throw(x-y);
//     }
// }
// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     try{
//         // cout<<"Inside the Block\n"
//         devide(10,20,30);
//         devide(10,10,20);
//     }
//     catch(int x){
//         cout<<"Exception found\n";
//     }
    
//     return maru
// }





#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>v;
    v.push_back(10);
    v.push_back(30);
    for(auto x:v) cout<<x<<" ";
    cout<<'\n';
    v.insert(v.begin()+1, 323);
    for(auto x:v) cout<<x<<" ";
    cout<<'\n';

    
    return maru
}