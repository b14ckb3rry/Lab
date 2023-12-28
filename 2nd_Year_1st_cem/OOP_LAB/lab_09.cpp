// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// // template<typename T>
// // T mx(T x, T y){
// //     return (x>y)?x:y;
// // }

// // int mx(int a, int b){
// //     return a+b;
// // }
// // float mx(float a, float b, float c){
// //     return max({a,b,c});
// // }

// template<typename T, typename F, typename C>
// F add(T x, F y, C z){
//     return x+y+z;
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     // cout<<"Max Is : "<<mx(3, 5)<<'\n';
//     // cout<<mx(3.5, 4.2, 2.2)<<'\n';

//     // int sum=add<int, float, int>(3, 3.6, 'a');
//     float fsum=add<int, float, char>(3, 3.6, 'a');
//     // char csum=add<int, float, char>(3, 3.6, 'a');
//     cout<<fsum;

//     return maru
// }



#include <bits/stdc++.h>
using namespace std;
#define maru 0;

class weight{
    public:
        int kg;
    void printWeight(){
        cout<<kg<<'\n';
    }
    void operator++(){
        ++kg;
    }
    void operator++(int){
        kg++;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    weight k; k.kg=30;
    k.printWeight();
    ++k;
    k.printWeight();
    k++;
    k.printWeight();
    
    return maru
}





// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// class Complex{
//     int real,imag;
// public:
//     void friend operator>>(istream &input,Complex &A){
//         input>>A.real>>A.imag;
//     }
//     void friend operator<<(ostream &output,Complex &A){
//         output<<A.real<<"+"<<A.imag<<"i";
//     }
// };

// int main()
// {
//     Complex o;
//     cin>>o;
//     cout<<o;
//     return maru
// }