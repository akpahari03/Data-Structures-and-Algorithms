#include<bits/stdc++.h>
using namespace std;
void update(int **p2) {
    // p2=p2+1; //no change
    // *p2=*p2+1; 
    **p2=**p2+1; //value of i will increment by 1
}
int main()
{
    int i=5;
    int *p1=&i;
    int **p2=&p1;
    // cout<<"printing p1 "<<p1<<endl;
    // cout<<"address of p1 "<<&p1<<endl;
    // cout<<"address of i "<<&i<<endl;
    // cout<<"value of p1 "<<*p1<<endl;

    // cout<<"priting of p2 "<<p2<<endl;
    // cout<<"address of p2 "<<&p2<<endl;
    // cout<<"value at p2 "<<*p2<<endl;

    //for priting value of i
    cout<<"for priting value of i "<<endl;
    cout<<"i-> "<<i<<endl;
    cout<<"*p1-> "<<*p1<<endl;
    cout<<"**p2-> "<<**p2<<endl;

    //for printing address of i
    cout<<"for printing address of i "<<endl;
    cout<<"&i-> "<<&i<<endl;
    cout<<"p1-> "<<p1<<endl;
    cout<<"*p2-> "<<*p2<<endl;

    //for priting address of p1
    cout<<"for priting address of p1 "<<endl;
    cout<<"&p1-> "<<&p1<<endl;
    cout<<"p2-> "<<p2<<endl;    

    cout<<"before "<<i<<endl;
    cout<<"before "<<p1<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p1<<endl;
    cout<<"after "<<p2<<endl;

    
    return 0;
}