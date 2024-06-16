#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 10,12};
    int size = 6;
    cout << "Prinitng the array " << endl;
    printArray(arr, size);
    reverse(arr, size);
    cout << endl<< "Array after reverse " << endl;
    printArray(arr, size);
}