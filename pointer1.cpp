#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int* b = &a;
    int** c = &b;

    cout <<"The address of a is " << b << endl;
    cout <<"The address of a is " << &a<< endl;
    cout <<"The value at the address of b is "<< *b << endl;
    
    cout <<"The address of c" <<&c << endl;;
    cout << **c;

}