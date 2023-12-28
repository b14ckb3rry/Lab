// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru 0;

// class student{
//     public:
//         int age, id;
//         string name;
//     void getData(){
//         cout<<"Enter Name : "; cin>>name;
//         cout<<"Enter Age : "; cin>>age;
//         cout<<"Enter ID : "; cin>>id;
//         cout<<nl;
//     }
//     void display(){
//         cout<<"Name : "<<name<<nl<<"Age : "<<age<<nl<<"ID : "<<id<<nl<<nl;
//     }
// };

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     cout<<"Enter total student : ";
//     int n; cin>>n;
//     student st[n];
//     for(int i=0; i<n; i++){
//         st[i].getData();
//     }
//     cout<<nl;
//     for(int i=0; i<n; i++){
//         cout<<"Sudent NO : "<<i+1<<nl;
//         st[i].display();
//     }
    
//     return maru
// }





// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class account{
//     public:
//     float sal=1000;
// };
// class prog : public account{
//     public:
//         int bons=500;
// };

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(nullptr);
    
//     account ac;
//     cout<<"Salary : "<<ac.sal<<nl;
//     prog p;
//     cout<<"Salary : "<<p.sal<<" Bonous : "<<p.bons;
    
    
//     return maru
// }


#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

class Rectangle{
    public:
        int len;
        int wid;
};

class Block : public Rectangle{
    public:
        int hei;
    void getData(){
        cout<<"Enter length : "; cin>>len;
        cout<<"Enter Width : "; cin>>wid;
        cout<<"Enter height : "; cin>>hei;
    }
    void valDisplay(){
        cout<<"Length : "<<len<<nl<<"Width : "<<wid<<nl<<"Height : "<<hei<<nl;
    }
    void calculate(){
        cout<<"Are : "<<len*wid<<nl;
    }
};

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    Block bl;
    bl.getData();
    bl.valDisplay();
    bl.calculate();
    return maru
}





// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru 0;

// class timeMachine{
//     public:
//     int h1,m1,s1;
//     int h2,m2,s2;
//     void getData() {
//         cout<<"Enter 1st hour, mini and sec : ";   /// 25 55 53   10 6 40  93%60 == 1 // 93-1*60  
//         cin >> h1 >> m1 >> s1;                             // 33 sec 2 mint 36
//         cout<<"Enter 2nd hour, mini and sec : ";
//         cin >> h2 >> m2 >> s2;
//     }
//     void cal() {
//         int sec=0,mint=0,hr=0;
//         if(s1+s2>60) {
//             int secMod= (s1+s2)/60; // mintue ber hbe mod diye
//             sec= (s2+s1) - secMod*60; // sec calcula
//             mint+=secMod; // mint calc
//         }
//         else sec=s1+s2;
//         if(m1+m2>60) {
//             int minMod= (m1+m2) / 60;
//             mint= mint+ (m1+m2)- minMod*60;
//             hr+=minMod;
//         }
//         else mint=m1+m2;
//         hr=hr+h1+h2;
//         cout<<"Total time: "<<hr<<" hours "<<mint<<" minutes "<<sec<<" seconds "<<endl;
//     }
// };

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     timeMachine tm;
//     tm.getData();
//     tm.cal();
    
//     return maru
// }



// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';
// #define maru 0;

// class timeMachine{
//     public:
//     int h1,m1,s1;
//     int h2,m2,s2;
//     void getData() {
//         cout<<"Enter 1st hour, mini and sec : ";   /// 25 55 53   10 6 40  93%60 == 1 // 93-1*60  
//         cin >> h1 >> m1 >> s1;                             // 33 sec 2 mint 36
//         cout<<"Enter 2nd hour, mini and sec : ";
//         cin >> h2 >> m2 >> s2;
//     }
//     friend timeMachine cal(timeMachine lol);
// };

// timeMachine cal(timeMachine res) {
//         int sec=0,mint=0,hr=0;
//         if(res.s1+res.s2>60) {
//             int secMod= (res.s1+res.s2)/60; // mintue ber hbe mod diye
//             sec= (res.s2+res.s1) - secMod*60; // sec calcula
//             mint+=secMod; // mint calc
//         }
//         else sec=res.s1+res.s2;
//         if(res.m1+res.m2>60) {
//             int minMod= (res.m1+res.m2) / 60;
//             mint= mint+ (res.m1+res.m2)- minMod*60;
//             hr+=minMod;
//         }
//         else mint=res.m1+res.m2;
//         hr=hr+res.h1+res.h2;
//         cout<<"Total time: "<<hr<<" hours "<<mint<<" minutes "<<sec<<" seconds "<<endl;
//     }

// int32_t main()
// {
//     // ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     timeMachine tm;
//     tm.getData();
//     cal(tm);
    
//     return maru
// }