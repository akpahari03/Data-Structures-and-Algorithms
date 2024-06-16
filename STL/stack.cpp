#include<bits/stdc++.h>
using namespace std;
int main()
{
    //everything happens in O(1)
    //LIFO
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
    cout << st.top()<<endl; //10
    st.pop();
    cout << st.top()<<endl; //8


}