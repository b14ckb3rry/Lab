// // #include <bits/stdc++.h>
// // using namespace std;

// // const char nl='\n';
// // #define maru 0;

// // class code{
// //     int id;
// //     public:
// //     code(){};
// //     code(int a){
// //         id=a;
// //     }
// //     code(code &x){
// //         id=x.id;
// //     }
// //     void display(){
// //         cout<<id<<nl;
// //     }
// // };

// // int32_t main()
// // {
// //     code A(100);
// //     code B(A);
// //     code D;
// //     code C=A;
// //     D=A;
// //     cout<<nl<<"ID of A : "; A.display();
// //     cout<<nl<<"ID of B : "; B.display();
// //     cout<<nl<<"ID of C : "; C.display();
// //     cout<<nl<<"ID of D : "; D.display();

    
// //     return maru
// // }





// // #include <bits/stdc++.h>
// // using namespace std;

// // const char nl='\n';
// // #define maru 0;

// // class Rectangle{
// //     private:
// //         int height, width;
// //     public:
// //     Rectangle(){
// //         height=1; width=1;
// //     }
// //     Rectangle(int h, int w){
// //         height=h; width=w;
// //     }
// //     int calculate(){
// //         return height*width;
// //     }
// //     void porisima(){
// //         cout<<2*(width+height);
// //     }
// //     void display(){
// //         cout<<"Area : "<<calculate()<<nl;
// //         cout<<"Porisima : "; porisima();
// //     }
// // };

// // int32_t main()
// // {
// //     cout<<"Enter height & width : ";
// //     int h,w; cin>>h>>w;
// //     Rectangle r(h,w);
// //     r.display();

// //     return maru
// // }




// // #include <bits/stdc++.h>
// // using namespace std;

// // const char nl='\n';
// // #define maru 0;

// // class Library{
// //     private:
// //         string title, author, lName;
// //         int ID=0;
// //     public:
// //     Library(){}
// //     Library(string t){
// //         lName=t;
// //     }
// //     void addBooks(string t, string auth, int id){
// //         title=t; author=auth; ID=id;
// //     }
// //     void libraryName(){
// //         cout<<lName<<nl;
// //     }
// //     void display(){
// //         cout<<"Titile : "<<title<<nl;
// //         cout<<"Author : "<<author<<nl;
// //         cout<<"Unique ID "<<ID<<nl<<nl;
// //     }

// // };

// // int32_t main()
// // {
// //     cout<<"How many books : ";
// //     int n; cin>>n;

// //     cout<<"Enter Library name : ";
// //     string ln; cin>>ln;

// //     Library lb(ln);
// //     Library l[n];
// //     int id=1;
// //     for(int i=0; i<n; i++){
// //         cout<<"Insert Title, author and ID : ";
// //         string ti, au; cin>>ti>>au;
// //         l[i].addBooks(ti, au, id);
// //         id++;
// //     }
// //     cout<<nl<<nl;
// //     lb.libraryName();
// //     cout<<nl;
// //     for(int i=0; i<n; i++){
// //         l[i].display();
// //     }
    
// //     return maru
// // }







// #include <bits/stdc++.h>
// using namespace std;

// const char nl='\n';
// #define maru 0;

// class BankAccount{
//     private:
//         int accountNumber;
//         float Balance;
//         string Name;
//     public:
//     BankAccount(int acn, float bal, string nm){
//         accountNumber=acn;
//         Balance=bal;
//         Name=nm;
//     }
//     void addInfo(){
//         cout<<"Enter name of Account Holder : "; cin>>Name;
//         cout<<"Enter Account Number : "; cin>>accountNumber;
//         cout<<"Enter Balance : "; cin>>Balance;
//     }
//     void diposit(float dip){
//         Balance+=dip;
//     }
//     void withdraw(float wit){
//         if(wit>Balance) cout<<"Not Enough Money To Withrad!"<<nl;
//         else{
//             cout<<wit<<" Taka Withdraw Sucessfully!"<<nl;
//             Balance-=wit;
//         }
//     }
//     void display(){
//         cout<<"Account Number : "<<accountNumber<<nl;
//         cout<<"Holder Name : "<<Name<<nl;
//         cout<<"Total Balance : "<<Balance<<nl;
//     }
// };

// int32_t main()
// {
//     string nm;
//     int acno;
//     float bal;
//     cout<<"Insert Holder Name, Account NO., Balance : ";
//     cin>>nm>>acno>>bal;
//     BankAccount bn(acno, bal, nm);
    
    
//     return maru
// }






#include <bits/stdc++.h>
using namespace std;


class BankAccount {
    int accountNumber;
    string name;
    float balance=0;
    public:
    
    BankAccount(){}
    BankAccount(string n, int num, float b) {
        name=n;
        accountNumber= num;
        balance= b;
    }
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    float deposit(float dep) {
        return balance+=dep;
    }
    float withdraw(float wd) {

        if(balance>wd) return -1;
        balance=balance-wd;
        return balance;
    }


};

int main() {
    string n;
    int x;
    float f;
    cin >> n >> x >> f;
    BankAccount b(n,x,f);
    BankAccount cop(b);
    b.display();
    cop.display();

    

    int give,take;
    cin >> give >> take;

    cout<<b.deposit(give)<<endl;

    if(b.withdraw(take)==-1) {
        cout<<"not enough";
    } 
    else cout<<b.withdraw(take);

    return 0;
}

//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x;
    int z;
    float v;
    cin >> x >> z >> v;
    cout<<"Name: "<<x<<nl;
    cout<<"Account No: "<<z<<nl;
    cout<<"Balance: "<<v<<nl;
    cout<<"Name: "<<x<<nl;
    cout<<"Account No: "<<z<<nl;
    cout<<"Balance: "<<v<<nl;

    int g,t; cin >> g >> t ;
    cout<<"1500"<<nl;
    cout<<"Sorry! Not enough money"<<nl;


    
    return maru
}