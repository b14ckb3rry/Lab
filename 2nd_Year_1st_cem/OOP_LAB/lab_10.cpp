// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class A{
//     public:
//     void fun(){
//         cout<<"Hello\n";
//     }
// };
// class B{
//     public:
//     void fun(){
//         cout<<"Rahim\n";
//     }
// };
// class C : public A , public B{};

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     C obj;
//     obj.A::fun();
//     obj.B::fun();
    
//     return maru
// }








// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class A{
//     public:
//     void fun(){
//         cout<<"From A\n";
//     }
// };
// class B{
//     public:
//     void fun(){
//         cout<<"From B\n";
//     }
// };
// class C : public A, public B{
//     public:
//     void fun(){
//         cout<<"From C\n";
//     }
// };
// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     C obj;
//     obj.fun();
//     obj.A::fun();
//     obj.B::fun();
    
//     return maru
// }








// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class A{
//     public:
//     void display(){
//         cout<<"From Class A\n";
//     }
// };
// class B : virtual public A{
//     public:
//     void show(){
//         cout<<"From Class B\n";
//     }
// };
// class C : virtual public A{
//     public:
//     void fun(){
//     cout<<"From Class C\n";
//     }
// };
// class D : virtual public B, virtual public C{
//     public:
//     void print(){
//         cout<<"From Class D\n";
//     }
// };
// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     D obj;
//     obj.print();
//     obj.display();
//     obj.show();
//     obj.fun();
    
//     return maru
// }








#include <bits/stdc++.h>
using namespace std;
#define maru 0;

class RestaurantMeal{
    public:
        string name;
        float price=4.00;
    void namePrice(){
        cout<<"Food name : ";
        cin>>name;
    }
};
class HotelService{
    public:
        string serviceName;
        float Fee;
        int Room;
        void serviceFee(){
            cout<<"Service name & Price & Room NO. : ";
            cin>>serviceName>>Fee>>Room;
        }
};
class RotelServiceMeal : public RestaurantMeal, public HotelService{
    public:
    void display(){
    cout<<"Service Name : "<<serviceName<<"\nFee : $"<<Fee<<"\nRoom No. : "<<Room<<'\n';
    cout<<"\nFood : "<<name<<"\nService Price : $"<<price<<"\nTotal cost : $"<<Fee+price;
    }
};

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    RotelServiceMeal H;
    H.namePrice();
    H.serviceFee();
    cout<<'\n';
    H.display();
    cout<<'\n';
    
    return maru
}