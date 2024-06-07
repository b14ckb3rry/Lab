// //***********************************//
// //*         MD SIRAJUL ISLAM        *//
// //*      github.com/b14ckb3rry      *//
// //***********************************//

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     //STL hocce 4 proker : 1 container 2 iterator 3 algorithms 4 functors
//     // pair is not a container

//     vector<int>v;
//     // v.push_back(10);
//     // cout << v.size() << ' ' << v.capacity() << '\n';
//     // v.push_back(20);
//     // cout << v.size() << ' ' << v.capacity() << '\n';
//     // v.push_back(30);
//     // cout << v.size() << ' ' << v.capacity() << '\n';
//     // v.push_back(40);
//     // cout << v.size() << ' ' << v.capacity() << '\n';
//     // v.push_back(50);
//     // cout << v.size() << ' ' << v.capacity() << '\n';

//     for(int i=0; i<10; i++)
//     {
//         int x; cin>>x;
//         v.push_back(x);
//     }
//     for(auto x : v)
//     {
//         cout << x << ' ';
//     }
//     cout << "\nCapacity : " << v.capacity() << "\nSize : " << v.size();
//     v.shrink_to_fit();
//     cout << "\nCapacity : " << v.capacity() << "\nSize : " << v.size();

// }



// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     int j = 1;
//     bool flag = false;
//     for (auto x : v)
//     {
//         if (x == j)
//         {
//             flag = true;
//             j++;
//             continue;
//         }
//         else
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
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
    
//     string s, s1;
//     cin>> s >> s1;
//     vector<char>v, v1;
//     for(auto x : s)
//     {
//         v.push_back(x);
//     }
//     for(auto x : s1)
//     {
//         v1.push_back(x);
//     }
//     vector<char>res;
//     for(auto c : s)
//     {
//         for(auto c1 : s1)
//         {
//             if(c1==c)
//             {
//                 res.push_back(c1);
//             }
//         }
//     }
//     int sz = s1.size();
//     if(sz==res.size())
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
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
    
//     int n; cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     vector<int>res;
//     // if(v[0]<v[1])
//     // {
//     //     res.push_back(v[0]);
//     // }
//     // if(v[n-1]<v[n-2])
//     // {
//     //     res.push_back(v[0]);
//     // }
//     for(int i=0; i<n; i++)
//     {
//         if(v[i]<v[i-1] && v[i]<v[i+1])
//         {
//             res.push_back(v[i]);
//         }
//     }
//     for(auto x : res)
//     {
//         cout << x << '\n';
//     }
    
//     return maru
// }