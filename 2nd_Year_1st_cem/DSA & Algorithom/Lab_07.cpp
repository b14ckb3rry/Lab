// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class myStack{
//     public:
//         list<int>l;
//         void push(int val){
//             l.push_back(val);
//         }
//         void pop(){
//             l.pop_back();
//         }
//         int top(){
//             return l.back();
//         }
//         int size(){
//             return l.size();
//         }
//         bool empty(){
//             if(l.size()==0) return true;
//             else return false;
//         }
// };

// int32_t main(){
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);


//     myStack st;

//     while(true){
//         cout<<"Hit 1 to Push"<<nl;
//         cout<<"Hit 2 to pop"<<nl;
//         cout<<"Hit 3 Display"<<nl;
//         cout<<"Hit 4 to Exit"<<nl<<nl;
//         int cmd; cin>>cmd;

//         switch(cmd){
//             case 1:
//                 cout<<"Enter Element No. : ";
//                 int n; cin>>n;
//                 for(int i=0; i<n; i++){
//                     int val; cin>>val;
//                     st.push(val);
//                 }
//                 cout<<"Updated"<<nl<<nl;
//                 break;
//             case 2:
//                 st.pop();
//                 cout<<"Updated"<<nl<<nl;
//                 break;
//             case 3:
//                 if(st.empty()){
//                     cout<<"Underflow"<<nl<<nl;
//                 }
//                 else{
//                     myStack s=st;
//                     while(!s.empty()){
//                         cout<<s.top()<<" ";
//                         s.pop();
//                     }
//                     cout<<nl<<nl;
//                 }
//                 break;
//             case 4:
//                 cout<<nl<<"Program Terminaterd!"<<nl<<nl;
//                 return maru
//                 break;
//         }
//     }

//     return maru
// }





#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    stack<int>st;
    for(char ch:s){
        if(ch>='0' && ch<='9'){
            st.push(ch-'0');
        }
        else{
            int a=st.top();
            st.pop();
 
            int b=st.top();
            st.pop();
 
            if (ch=='+'){
                st.push(b+a);
            }
            else if (ch=='-'){
                st.push(b-a);
            }
            else if (ch=='*'){
                st.push(b*a);
            }
            else if (ch=='/'){
                st.push(b/a);
            }
        }
    }
    cout<<st.top();

    return maru
}