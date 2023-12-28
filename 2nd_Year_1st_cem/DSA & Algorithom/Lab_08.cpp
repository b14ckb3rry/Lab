//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     cout<<"Enter expression here : ";
//     string s; cin>>s;
//     stack<char>st;
//     char ch; bool flag=true;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
//             st.push(s[i]);
//             continue;
//         }
//         if(st.empty()){
//             flag=false;
//         }
//         switch(s[i]){
//             case ')':
//                 ch=st.top();
//                 st.pop();
//                 if(ch=='{' || ch=='['){
//                     flag=false;
//                 }
//                 break;
//             case '}':
//                 ch=st.top();
//                 st.pop();
//                 if(ch=='(' || ch=='['){
//                     flag=false;
//                 }
//                 break;
//             case ']':
//                 ch=st.top();
//                 st.pop();
//                 if(ch=='(' || ch=='{'){
//                     flag=false;
//                 }
//                 break;
//         }
//     }
//     if(flag) cout<<"Balance\n";
//     else cout<<"Not Balance\n"; 
    
//     return maru
// }







#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;
int cnt=0;

void Hanoi(int n, char start, char end, char oxi){
	if(n==0) return;
    cnt++;
	Hanoi(n - 1, start, oxi, end);
	cout<<"Move disk "<<n<<" from "<<start<<" to "<<end<<'\n';
	Hanoi(n-1, oxi, end, start);
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout<<"\nEnter number of disk : ";
    int n; cin>>n;
    cout<<'\n';
    Hanoi(n, 'A', 'B', 'C');
    cout<<"\nTotal : "<<cnt<<" Move\n\n";
    
    return maru
}



///Merge sort, Quick sort and Queue