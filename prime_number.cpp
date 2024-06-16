#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number that has to be checked" << endl;
    cin>>n;
    bool isPrime = 1;
    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0) {
            // cout << "It is not a prime number"<<endl;
            isPrime = 0;
            break;
        }  
    }
    if(isPrime==0) {
        cout <<"It is not a prime number" <<endl;
    }
    else{
        cout <<"It is a prime number" <<endl;
    }
    
   
}