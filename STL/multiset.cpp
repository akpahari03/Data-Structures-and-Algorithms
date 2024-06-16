#include<bits/stdc++.h>
using namespace std;
int main()
{
    //sorted but not unique
    multiset<int> ml;
    ml.insert(22);
    ml.insert(2002);
    ml.insert(22);
    ml.insert(2211);
    cout << ml.count(22);
    ml.erase(22); // erase all 22
    
}