#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class sum{
    public:
        int a,b;
    sum(int a, int b){
        this->a=a;
        this->b=b;
    }
    void printSum(){
        cout<<"Sum is : "<<a+b<<nl;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int num1,num2; cin>>num1>>num2;
    sum add(num1,num2);
    add.printSum();
    
    return maru
}




#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class Rectangle{
    public:
        int length, breath;
    Rectangle(){
        length=0; breath=0;
        display();
    }
    Rectangle(int length){
        cout<<"Area : "<<length*length<<nl;
    }
    Rectangle(int length, int breath){
        this->length=length;
        this->breath=breath;
        display();
    }
    void display(){
        cout<<"Area : "<<length*breath<<nl;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    Rectangle rec1;
    int l,b; cin>>l>>b;
    Rectangle rec2(l);
    Rectangle rec3(l,b);

//     Rectangle rec;
//     cin>>rec.length;
//     rec(rec.length);
//     cin>>rec.length>>rec.breath;
//     rec(rec.length, rec.breath);
    
    return maru
}




#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class addAmount{
    public:
        int amount=50;
    addAmount(){
        display();
    }
    addAmount(int money){
        amount+=money;
        display();
    }
    void display(){
        cout<<"Total amount : "<<amount<<nl;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int val; cin>>val;
    addAmount pige;
    addAmount pig(val);
    
    return maru
}





#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class number{
    int val_1, val_2;
    public:
    void input(){
        cin>>val_1>>val_2;
    }
    void largest(){
        cout<<"Large Value is : "<<max(val_1, val_2)<<nl;
    }
    void display(){
        largest();
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    number num;
    num.input();
    num.display();
    
    return maru
}