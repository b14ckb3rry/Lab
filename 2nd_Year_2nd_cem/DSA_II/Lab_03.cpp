// //***********************************//
// //*         MD SIRAJUL ISLAM        *//
// //*      github.com/b14ckb3rry      *//
// //***********************************//

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0

// void displayStack(stack<string> st)
// {
//     while (!st.empty())
//     {
//         cout << st.top();
//         st.pop();
//         cout << '\n';
//     }
//     cout << '\n';
// }

// int32_t main()
// {
//     stack<string> st;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         st.push(s);
//     }
//     cout << '\n';
//     displayStack(st);
//     int x; cin>>x;
//     for(int i=0; i<x; i++)
//     {
//         st.pop();
//     }
//     displayStack(st);
//     cout << st.top() << '\n';
//     if(st.empty())
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }

//     return maru;
// }









// //Problem 01

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0

// void displayStack(stack<char> st)
// {
//     while (!st.empty())
//     {
//         cout << st.top();
//         st.pop();
//     }
// }
// //44312
// //2
// //443
// int32_t main()
// {   
//     string s; cin>>s;
//     stack<char>dummy;
//     for(auto x : s)
//     {
//         dummy.push(x);
//     }
//     int n; cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         dummy.pop();
//     }
//     stack<char>st;
//     while(!dummy.empty())
//     {
//         st.push(dummy.top());
//         dummy.pop();
//     }
//     displayStack(st);

//     return maru;
// }





// //Problem 02

// #include <bits/stdc++.h>
// using namespace std;
// bool blance(string s)
// {
// 	stack<char> st;
// 	char x;
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
// 		{
// 			st.push(s[i]);
// 			continue;
// 		}
// 		if (st.empty())
// 			return false;
        
// 		switch (s[i]) {
// 		case ')':
// 			x = st.top();
// 			st.pop();
// 			if (x == '{' || x == '[')
// 				return false;
// 			break;

// 		case '}':
// 			x = st.top();
// 			st.pop();
// 			if (x == '(' || x == '[')
// 				return false;
// 			break;

// 		case ']':
// 			x = st.top();
// 			st.pop();
// 			if (x == '(' || x == '{')
// 				return false;
// 			break;
// 		}
// 	}
// 	return (st.empty());
// }

// int main()
// {
//     int t; cin>>t;
//     while(t--){
// 	string s; cin>>s;
// 	if (blance(s))
// 		cout << "YES";
// 	else
// 		cout << "NO";
//     }
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     map<int, char>mp;
//     // string s; cin>>s;
//     // for(auto x : s)
//     // {
//     //     mp[x]++;
//     // }
//     int n; cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         char c; cin>>c;
//         mp[i]=c;
//     }
//     map<char, int>m;
//     for(auto [x,y] : mp)
//     {
//         m[y]++;
//     }
//     // int key; cin>>key;
//     // auto it = mp.begin();
//     // it = m.find(key);
//     // if(it==m.end())
//     // {
//     //     cout << "Not in the map\n";
//     // }
//     // else{
//     //     cout << "Found in map : " << it <<'\n';
//     // }
//     for(auto [x,y] : m)
//     {
//         cout << x << " = " << y;
//         cout << '\n';
//     }

//     // for(auto [x,y] : mp)
//     // {
//     //     cout << x << " = " << y <<'\n';
//     // }
// }



//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

// #include <bits/stdc++.h>
// using namespace std;

// int getsum(stack<int>st)
// {
//     int sum = 0;
//     while(!st.empty())
//     {
//         sum += st.top();
//         st.pop();
//     }
//     return sum;
// }

// int maxSum(stack<int>st1, stack<int>st2, stack<int>st3){
//     int sum1 = getsum(st1);
//     int sum2 = getsum(st2);
//     int sum3 = getsum(st3);
//     while(true)
//     {
//         if(sum1 == sum2 and sum2 == sum3)
//         {
//             break;
//         }
//         if(sum1 >= sum2 and sum1 >= sum3)
//         {
//             sum1 -= st1.top();
//             st1.pop();
//         }
//         else if(sum2 >= sum1 and sum2 >= sum3)
//         {
//             sum2 -= st2.top();
//             st2.pop();
//         }
//         else
//         {
//             sum3 -= st3.top();
//             st3.pop();
//         }
//     }
//     return sum1;
// }

// int32_t main()
// {

//     int a,b,c;
//     cin>>a>>b>>c;
//     stack<int>st1,st2,st3;
//     for(int i=0; i<a; i++)
//     {
//         int x; cin>>x;
//         st1.push(x);
//     }
//     for(int i=0; i<b; i++)
//     {
//         int x; cin>>x;
//         st2.push(x);
//     }
//     for(int i=0; i<c; i++)
//     {
//         int x; cin>>x;
//         st3.push(x);
//     }

//     int res = maxSum(st1, st2, st3);
//     cout << res << '\n';
    
//     return 0;
// }