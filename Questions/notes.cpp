#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter amount";
    cin >> n;
    int num=0;
    int note=0;
    switch(num)
    {
        case 0 : note = n/100;
        n= n-(note*100);
        cout << "Hundread rs note are "<<note << endl ;

        case 1 : note = n/50;
        n=n-(note*50);
        cout << "Fifty rs notes are " << note << endl;

        case 2 : note = n/20;
        n=n-(note*20);
        cout << "Twenty rs notes are " << note << endl;
        case 3 : note = n/10;
        n=n-(note*1);
        cout << "Ten rs notes are " << note << endl;
    }
}