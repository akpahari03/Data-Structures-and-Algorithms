#include<bits/stdc++.h>
using namespace std;
vector<int> rev(vector<int> &arr)
{
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return arr;
}
void print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr;
    arr.push_back(34);
    arr.push_back(344);
    arr.push_back(3254);
    arr.push_back(394);
    arr.push_back(3994);
    arr.push_back(3411);
    vector<int> ans= rev(arr);
    print(arr);
    return 0;
}