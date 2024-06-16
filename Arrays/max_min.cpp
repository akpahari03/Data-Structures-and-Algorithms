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
void printArray(int arr[],int size)
{
    cout << "Values of the array " <<endl;

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << endl;
    }

}
int main()
{
    int size;
    cout << "Enter size of array "<<endl;
    cin>>size;
    int arr[size];
    initilizeArray(arr,size);
    printArray(arr,size);
    //method 1
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout << "Maximum value "<< max << endl;
    cout << "min value "<< min;

}