#include<bits/stdc++.h>
using namespace std;
class college {
    public:
    //contructor
    college() {
        cout<<"Constructor is called"<<endl;
    }
    ~college() {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    //static allocation
    college c1;
    //dynamic allocation
    college *c2 = new college;
    delete c2; //for dynamic allocation destructor is not atomatically called
    return 0;
}