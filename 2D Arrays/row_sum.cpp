#include <bits/stdc++.h>
using namespace std;
void rowSum(int arr[][3],int row,int col)
{
    int maxi=INT_MIN;
    int maxRow;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        cout<<"Sum of row "<<row<<"-> "<<sum<<endl;
        if(sum>maxi)
        {
            maxRow=row;
            maxi=sum;
        }
    }
    cout<<"Largest Row "<<maxRow;
}
int main()
{
    int arr[3][3];
    cout << "Enter the elements" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "2d array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    rowSum(arr,3,3);
    return 0;
}