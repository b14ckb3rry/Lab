#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class cmplx{
    int a,b;
    public:
        void setnum (int x, int y){
            a=x; b=y;
        }
        void print(){
            cout<<a<<"+"<<b<<"i"<<nl;
        }
        friend cmplx sumOfObj(cmplx x1, cmplx x2);
};

cmplx sumOfObj(cmplx obj1, cmplx obj2){
    cmplx sum;
    sum.setnum((obj1.a+obj2.a), (obj1.b+obj2.b));
    return sum;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cmplx c1;
    c1.setnum(1,4);
    cmplx c2;
    c2.setnum(5,8);
    cmplx sum=sumOfObj(c1, c2);
    sum.print();
    
    return maru
}




#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class smpl{
    int a,b;
    public:
    void setVal(){
        a=25; b=40;
    }
    friend float mean(smpl s);
};

float mean(smpl s){
    return float(s.a+s.b)/2.0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    smpl x;
    x.setVal();
    cout<<"Mean Value : "<<mean(x)<<"i"<<nl;
    
    return maru
}






#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class cmplx{
    int a,b;
    public:
    void setnum(int x, int y){
        a=x; b=y;
    }
    friend cmplx mini(cmplx C);
};

cmplx mini(cmplx C){
    cout<<"Min Value : "<<min(C.a, C.b)<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cmplx object_1;
    object_1.setnum(5, 10);
    cmplx res=mini(object_1);
    
    return maru
}
