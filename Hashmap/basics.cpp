#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> mp;

    //insertion:
    //1
    mp["ayush"]=1;

    //2
    pair<string,int> p = make_pair("rahul",2);
    mp.insert(p);

    //3
    pair<string,int> p2("rakesh",5);
    mp.insert(p2);

    //search
    cout<<mp["ayush"]<<endl;
    cout<<mp.at("rahul")<<endl;

    // cout<<mp.at("unknown")<<endl; this will return out_of_range
    cout<<mp["unknown"]<<endl; //this will return 0 and create a key unknown
    cout<<mp.at("unknown")<<endl;

    //size
    cout<<mp.size()<<endl;

    //to check presence
    cout<<mp.count("ayush")<<endl;

    //erase
    mp.erase("rahul");
    cout<<mp.size()<<endl;

    //iterator
    unordered_map<string,int> :: iterator it = mp.begin();
    while(it !=mp.end()) {
        cout<<it->first<<" "<< it->second<<endl;
        it++;
    }

    return 0;
}