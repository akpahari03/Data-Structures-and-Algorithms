#include<bits/stdc++.h>
using namespace std;
long long power(int a,int b) {
    if(b==0) return 1;
    if(b==1) return a;
    long long ans=power(a,b/2);
    if(b%2==0) {
        return ans*ans;
    }
    else {
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    cout<<"Enter a "<<endl;
    cin>>a;
    cout<<"Enter b "<<endl;
    cin>>b;
    cout<<"Power is "<<power(a,b);
    return 0;
}