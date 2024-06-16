#include<iostream>
using namespace std;
// void nBinaryTriangle(int n) {
//     int i=1;
//     while(i<=n)
//     {
//         int start=1;
//         if(i%2==0)
//         {
//             start=0;
//         }
//         int j=1;
//         while(j<=i)
//         {
//             cout << start;
//             start=1-start;
//             j++;
//         }
//         cout <<endl;
//         i++;
//     }
// }
void numberCrown(int n) {
    int i=1;
    int spaces = 2*(n-1);
    while(i<=n)
    {
        
        int j=1;
        while(j<=i)
        {
            cout << j;
            j++;
        }
        int k=1;
        while(k<=spaces)
        {
            cout << " ";
            k++;
        }
        int l=i;
        while(l>=1)
        {
            cout << l;
            l--;
        }
        cout << endl;
        spaces = spaces-2;
        i++;
    }
}

int main(){
    numberCrown(3);
}