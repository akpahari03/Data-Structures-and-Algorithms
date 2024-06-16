#include<iostream>
using namespace std;
void initilizeArray(int arr[],int size)
{
    cout << "Enter Values"<< endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
bool linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int size;
    cout << "Enter size of array "<<endl;
    cin>>size;
    int arr[size];
    initilizeArray(arr,size);
    int key;
    cout << "Enter the key to search ";
    cin>>key;
    if(linearSearch(arr,size,key))
    {
        cout << "Found the key in the array ";
    }
    else
    {
        cout << "Not found the key in the array ";

    }
}