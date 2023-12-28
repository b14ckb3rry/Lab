//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class Cents{
//     private:
//         int m_nCents;
//     public:
//     Cents(int num){
//         m_nCents=num;
//     }
//     friend Cents operator+(const Cents &c1, const Cents &c2);
//     int GetCents(){
//         return m_nCents;
//     }
// };
// Cents operator+(const Cents &c1, const Cents &c2){
//     return Cents(c1.m_nCents+c2.m_nCents);
// }

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int a,b; cin>>a>>b;
//     Cents C1(a);
//     Cents C2(b);
//     Cents sum=C1+C2;
//     cout<<"I have "<<sum.GetCents()<<" Cents\n";

//     return maru
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class Cents{
//     private:
//         int m_nCents;
//     public:
//     Cents(int num){
//         m_nCents=num;
//     }
//     int GetCents(){
//         return m_nCents;
//     }
//     Cents operator+(const Cents& obj){
//         return Cents(m_nCents+obj.m_nCents);
//     }
// };

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int a,b; cin>>a>>b;
//     Cents C1(a);
//     Cents C2(b);
//     Cents sum=C1+C2;
//     cout<<"\nI have "<<sum.GetCents()<<" Cents\n\n";

//     return maru
// }

#include <iostream>
using namespace std;

class Complex{
    private:
        float x, y;
    public:
    Complex(float real = 0, float imag = 0){
        x = real;
        y = imag;
    }
    Complex operator+(Complex &obj){
        Complex c;
        c.x = x + obj.x;
        return c;
    }
    void print() { cout << x << "+i" << endl; }
    Complex operator-(Complex &obj){
        Complex c;
        c.y = y - obj.y;
        return c;
    }
    void display() { cout << y << "+i" << endl; }
};

int main(){
    Complex c1(27.5, 8.5), c2(20.5, 3.5);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    c3.print();
    c4.display();
}
