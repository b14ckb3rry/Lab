#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

class Student{
    public:
        int roll,phone;
        string name, address;
    void input(){
        cin>>name>>roll>>phone>>address;
    }
    void printData(){
        cout<<"Name : "<<name<<nl;
        cout<<"Roll : "<<roll<<nl;
        cout<<"Phone : "<<phone<<nl;
        cout<<"Address : "<<address<<nl;
    }
};

int32_t main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Student Sam;
    Student John;

    Sam.input();
    John.input();

    Sam.printData();
    cout<<nl;
    John.printData();

    maru
}

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class Employee{
    public:
    int salary, hours;

    void getInfo(int sal, int working_hours) {
        salary=sal;
        hours=working_hours;
    }
    int AddSal() {
        int total= salary*hours;
        if(total<500) {
            salary+=10;
        }
        total=salary*hours;
        return total;
    }
    int addWork() {
        int total_sal=AddSal();
        if(hours>6) {
            total_sal+=5*hours;
        }
        return total_sal;
    }
    void print() {
        cout<<"Total salary: "<<addWork()<<" $";
    }
};

int32_t main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    Employee e;
    int x,y;
    cout<<"Input salary per hour: ";
    cin >> x;
    cout<<"Input total working hour: ";
    cin >> y;

    e.getInfo(x,y);
    e.print();
    
    return maru
}