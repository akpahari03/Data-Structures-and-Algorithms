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
int sumofArray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter size of array "<<endl;
    cin>>size;
    int arr[size];
    initilizeArray(arr,size);
    cout << "Sum of array is "<<sumofArray(arr,size);

}