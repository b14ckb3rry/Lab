// Multi level inheritance
// Need atlist 3 class
// 1 ta class kokhono parant er moto abar child er mot acoron korle tai multi leve inheritance






// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class A{
//     public:
//     void classA(){
//         cout<<"Member of class A"<<nl;
//     }
// };
// class B : public A{
//     public:
//     void classB(){
//         cout<<"Member of class B"<<nl;
//     }
// };
// class C : public B{
//     public:
//     void classC(){
//         cout<<"Member of class C"<<nl;
//     }
// };

// int32_t main()
// {
//     A a;
//     B b;
//     C c;

//     cout<<"Object of A"<<nl;
//     a.classA();

//     cout<<nl<<"Object of B"<<nl;
//     b.classA(); b.classB();

//     cout<<nl<<"Object of C"<<nl;
//     c.classA(); c.classB(); c.classC();
    
//     return maru
// }







// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class shape{
//     public:
//         int length, Breath;
//     void putData(int l, int b){
//         length=l;
//         Breath=b;
//     }
// };

// class Rectangle : public shape{
//     public:
//     void areaRectangle(int len, int wid){
//         cout<<"Area of Rectangle : "<<len*wid<<nl;
//     }
// };

// class Triangle : public shape{
//     public:
//     void areaTriangle(int base, int hei){
//         cout<<"Area of Triangle : "<<0.5*(base*hei);
//     }
// };

// int32_t main()
// {
//     cout<<"Input length & Breath : ";
//     int l,b; cin>>l>>b;
//     shape s;
//     s.putData(l,b);
//     Rectangle rec;
//     rec.areaRectangle(s.length, s.Breath);
//     Triangle tri;
//     tri.areaTriangle(s.length, s.Breath);
    
//     return maru
// }









// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class Book{
//     public:
//         string title, author;
//     void putData(string ti, string auth){
//         title=ti; author=auth;
//     }
//     void display(){
//         cout<<"Title : "<<title<<nl<<"Author : "<<author<<nl;
//     }
// };
// class Fiction : public Book{
//     public:
//         int Level;
//     void readLevel(){
//         cout<<"Enter Readlevel : "; cin>>Level;
//     }
//     void displayReadLevel(){
//         cout<<"Read Level : "<<Level<<nl<<nl;
//     }
// };
// class NonFriction : public Book{
//     public:
//         int page;
//     void pageNumber(){
//         cout<<"Page Number : "; cin>>page;
//     }
//     void displayPageNumber(){
//         cout<<"Page Number : "<<page<<nl<<nl;
//     }
// }; 
// int32_t main()
// {   
//     cout<<"Inter Title & Author : ";
//     string t,a; cin>>t>>a;

//     Book b;
//     b.putData(t, a);

//     Fiction f;
//     f.putData(t, a);
//     f.readLevel();
//     f.display();
//     f.displayReadLevel();

//     NonFriction n;
//     n.putData(t, a);
//     n.pageNumber();
//     n.display();
//     n.displayPageNumber();
    
//     return maru
// }







#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

class Mammals{
    public:
    void displayMammals(){
        cout<<"Mammal"<<nl;
    }
};
class MarineAnimals{
    public:
    void displayMarineAnimals(){
        cout<<"Marine Animals"<<nl;
    }
};
class BlueWhile : public Mammals , public MarineAnimals{
    public:
    void botth(){
        cout<<"Both the Categories"<<nl;
    }
};
int32_t main()
{
    Mammals m; m.displayMammals();

    MarineAnimals ma; ma.displayMarineAnimals();

    BlueWhile bl; bl.botth(); bl.displayMammals(); bl.displayMarineAnimals();
    
    return maru
}


