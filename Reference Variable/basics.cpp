#include<bits/stdc++.h>
using namespace std;
void update1(int n) {
    n++;
}
void update(int &n) {
    n++;
}
int main()
{
    int n=9;
    int &i=n;
    cout<<n<<endl;
    n++;
    cout<<n<<endl;
    i++; // n is updated because we use refernce variable
    cout<<n<<endl;
    update1(n); //  n will not be updated because it is used pass by value
    cout<<n<<endl;
    update(n); // n will be updated because it is used pass by refernce
    cout<<n<<endl;
    return 0;
}