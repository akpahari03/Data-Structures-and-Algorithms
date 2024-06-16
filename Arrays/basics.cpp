#include<iostream>
using namespace std;

//making function to print array
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << endl;
    }
}

//Initilizing whole array with same single number(int)
void initilizeArray(int arr[],int size,int n)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=n;
    }
}

int main()
{
    //normal method without functions
    int a1[10];
    for(int i=0;i<10;i++)
    {
        a1[i]=1;
    }
    for(int i=0;i<10;i++)
    {
        cout << a1[i] << endl;

    }
    int a2[5];
    initilizeArray(a2,5,66);
    printArray(a2,5);

    char ch[3] = {'a','b','c'};
    cout << ch[2]<<endl;
    

}