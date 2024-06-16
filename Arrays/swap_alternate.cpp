#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[],int size)
{
    int start=0;
    int end=start+1;
    while(end<=(size-1))
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=start+1;
    }
}
void swap2(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1 < size)
        swap(arr[i],arr[i+1]);
    }
}

// //swap create swap function
// swap(int arr[],int size)
// {
//     int temp;
//     for(int i=0;i<size;i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1]=temp;
//     }
// }
int main()
{
    int arr[14] = {2, 4, 6, 8, 10,12,14,16,18,20,22,24,26,28};
    int arr2[15] = {2, 4, 6, 8, 10,12,14,16,18,20,22,24,26,28,30};
    int size = 14;
    int size2 = 15;
    cout << "Prinitng the array " << endl;
    printArray(arr, size2);
    swapAlternate(arr,size2);
    cout << "Prinitng the array after swap" << endl;
    printArray(arr, size2);
    


}