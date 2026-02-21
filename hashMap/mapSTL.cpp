#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creation
    unordered_map<string, int>m;
    //insertion has 3 methods.
    //1
    pair<string, int>p1= make_pair("babbar", 3);
    m.insert(p1);

    //2
    pair<string, int>p2("love", 2);
    m.insert(p2);

    //3
    //You can see there was no key "mera" initialised but this function create it and initialize it.
    m["mera"]= 1;

    //Updation
    m["mera"]= 2;
    m.at("mera")=10;

    //search has two methods.
    cout<<m["mera"]<<endl;

    cout<<m.at("babbar")<<endl;

    //Difference between the two search methods

    //Since no unknownKey is present in m so it will show error.
    // cout<<m.at("unknownKey")<<endl;

    //for a non initialized key, it creates a key and gives a value 0. 
    cout<<m["unknownKey"]<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence. for a unknown key it returns 0.
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");

    //printing all values.
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator. you can create for others stl also
    unordered_map<string, int>:: iterator it= m.begin();

    //using iterator
    while(it!= m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}