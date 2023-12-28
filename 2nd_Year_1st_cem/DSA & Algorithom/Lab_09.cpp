#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

class myQ{
    public:
        list<int> l;
        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_front();
        }
        int front(){
            return l.front();
        }
        int back(){
            return l.back();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};

int32_t main(){
    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    myQ q;
    myQ mq;
    cout<<"Enter the size of queue : ";
    int sz; cin>>sz;
    while(true){
        cout<<"\n1 to push Queue\n"<<"2 to Delete font Queue\n"<<"3 to display size of Queue\n";
        cout<<"4 to display Queue\n"<<"5 to show font & rare Queue\n"<<"6 to exit Queue\n";
        cout<<"Enter command here : ";
        int cmd; cin>>cmd;

        switch(cmd){
            case 1:
                cout<<"\nNumber of element : ";
                int n; cin>>n;
                cout<<"\nEnter element here : ";
                while(n--){
                    if(q.size()==sz){
                        cout<<"\nQueue Over flow!\n";
                        break;
                    }
                    else{
                        int val; cin>>val;
                        q.push(val);
                    }
                }
                break;

            case 2:
                cout<<"\nHow many element to pop? : ";
                int p; cin>>p;
                cout<<'\n';
                while(p--){
                    if(q.empty()){
                        cout<<"\nQueue Underflow!\n";
                        break;
                    }
                    else{
                        q.pop();
                    }
                }
                break;
            
            case 3:
                cout<<"\nSize of queue : "<<q.size()<<'\n';
                break;
            
            case 4:
                mq=q;
                cout<<'\n';
                if(mq.empty()){
                    cout<<"Queue Empty!\n";
                    break;
                }
                while(!mq.empty()){
                    cout<<mq.front()<<" ";
                    mq.pop();
                }
                cout<<'\n';
                break;
            case 5:
                cout<<"\nFont : "<<q.front();
                cout<<"\nRare : "<<q.back()<<'\n';
                break;

            case 6:
                cout<<"\nProgram Terminaterd!\n\n";
                return maru
                break;
        }
    }

    return maru
}













// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// void merge(int arr[], int l, int m, int r){
//     int left=m-l+1;
//     int right=r-m;
//     int L[left], R[right];
//     int key=0;
//     for(int i=1; i<=m i++){
//         L[key]==arr[i];
//         key++;
//     }
//     key=0;
//     for(int i=m+1; i<=r; i++){
//         R[key]=arr[i];
//         key++;
//     }
//     int i=0, j=0;
//     int current=1;
//     while(i<left && j<right){
//         if(L[i]<=R[i]){
//             arr[current]=L[i];
//             i++;
//         }
//         else{
//             arr[current]=R[i];
//             i++;
//         }
//         current++;
//     }
//     while(i<left){
//         arr[current]=L[i];
//         i++;
//         current++;
//     }
//     while(j<right){
//         arr[current]=R[i];
//         j++;
//         current++;
//     }
// }

// void merge_sort()

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
    
    
//     return maru
// }