#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the n"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout << a << " " << b << " " ;
    int sum;
    for(int i=1;i<=n;i++)
    {
        sum=a+b;
        cout << sum <<" ";
        a=b;    
        b=sum;

    }
}