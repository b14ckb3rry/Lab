// /////////////////////////////////////
// ***********************************//
// *         MD SIRAJUL ISLAM        *//
// *           DEPT OF CSE           *//
// *              BAUET              *//
// *      github.com/b14ckb3rry      *//
// ***********************************//
// /////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

class item{
    int number;
    float cost;
    public:
        void getdata(int a, float b);
        void putdata(){
            cout<<"Number"<<" "<<number<<nl<<"Cost"<<" "<<cost<<nl;
        }
};

void item::getdata(int a, float b){
    number=a;
    cost=b;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    item x;
    cout<<nl<<"Object X"<<nl;
    x.getdata(100,299.95);
    x.putdata();

    item y;
    cout<<nl<<"Object Y"<<nl;
    y.getdata(200, 175.50);
    y.putdata();
    
    maru
}

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

class student{
    public:
        int age;
        string name;
    void putdata();
    void getdata();
};

void student::putdata(){
    cin>>age>>name;
}

void student::getdata(){
    cout<<"Name"<<" "<<name<<nl<<"Age"<<" "<<age<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    student s;
    s.putdata();
    s.getdata();
    
    maru
}

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

class item{
    public:
        int n;
        int arr[10001];
        void getdata();
        void putdata();
        int maxFind();
        int minFind();
};

void item::putdata(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int item::maxFind(){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        maxi=max(arr[i],maxi);
    }
    return maxi;
}

int item::minFind(){
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        mini=max(arr[i],mini);
    }
    return mini;
}

void item::getdata(){
    cout<<maxFind()<<nl;
    cout<<minFind()<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    item i;
    i.putdata();
    i.getdata();
    
    maru
}

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

class item{
    public:
        int a,b;
        void getdata();
        void putdata();
        int maxFind();
        int minFind();
};

void item::putdata(){
    cin>>a>>b;
}

int item::maxFind(){
    return max(a,b);
}

int item::minFind(){
    return min(a,b);
}

void item::getdata(){
    cout<<"Max Value : "<<maxFind()<<nl;
    cout<<"Min Value : "<<minFind()<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    item i;
    i.putdata();
    i.getdata();
    
    maru
}