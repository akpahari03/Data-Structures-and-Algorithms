#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(20);
    st.push(22);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    if(st.empty()) cout<<"Empty stack";
    else cout<<"Non-empty stack";
    return 0;
}