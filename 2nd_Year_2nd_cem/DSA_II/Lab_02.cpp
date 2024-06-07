// //***********************************//
// //*         MD SIRAJUL ISLAM        *//
// //*      github.com/b14ckb3rry      *//
// //***********************************//

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0
// // #ifdef ONLINE_JUDGE
// // #define debug(...) 101
// // #define debug_array(x, y) 101
// // #else
// // #include "blackBox.h"
// // #endif

// // Queue
// // Complexity O(1)
// // Container are the datastructure that contain values
// // container er data access korte iterator use kora hoy
// // Algorithms are function for processing container
// //
// // Set
// //

// // int32_t main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int n; cin>>n;
// //     set<int>st;
// //     for(int i=0; i<n; i++)
// //     {
// //         int x; cin>>x;
// //         st.insert(x);
// //     }
// //     int val; cin>>val;
// //     auto it = st.find(val);
// //     if(it==st.end())
// //     {
// //         cout << "Not Found\n";
// //     }
// //     else
// //     {
// //         cout << val << " Found\n";
// //     }

// //     return maru;
// // }

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(nullptr);

//     // int n;
//     // cin >> n;
//     set<int> st;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     st.insert(x);
//     // }
//     while (true)
//     {
//         cout << "\nEnter 1 to add element\nEnter 2 to delete element\nEnter 3 to find element\nEnter 4 to print set\n";
//         cout << "Enter 0 to terminate program\n";
//         cout << "Enter Command Here : ";
//         int cmd;
//         cin >> cmd;
//         if (cmd == 1)
//         {
//             // cout << "Enter value here : ";
//             int x;
//             cin >> x;
//             st.insert(x);
//         }
//         else if (cmd == 2)
//         {
//             int x; cin>>x;
//             st.erase(x);
//             cout << "\nOperation Exicuted\n";
//         }
//         else if (cmd == 3)
//         {
//             int x; cin>>x;
//             auto it = st.find(x);
//             if (it == st.end())
//             {
//                 cout << "\nNot Found\n" << '\n';
//             }
//             else
//             {
//                 cout << '\n' << x << " Found\n" << '\n';
//             }
//         }
//         else if(cmd == 4){
//             cout << '\n';
//             for(auto it : st){
//                 cout << it << ' ';
//             }
//             cout << '\n' << '\n';
//         }
//         else if(cmd == 0){
//             cout << "\nProgram terminated\n";
//             break;
//         }
//     }

//     return maru;
// }

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    set<int> s;
    while (q-- > 0)
    {
        int qu;
        cin >> qu;
        int value;
        cin >> value;
        if (qu == 1)
        {
            s.insert(value);
        }
        if (qu == 2)
        {
            auto it = s.find(value);
            if (it == s.end())
                continue;
            else
            {
                s.erase(value);
            }
        }
        if (qu == 3)
        {
            auto it = s.find(value);
            cout << (it == s.end() ? "No" : "Yes") << '\n';
        }
    }

    return 0;
}