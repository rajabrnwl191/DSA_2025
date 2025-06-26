#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    //create
    unordered_map<string,int>mp;
    // insert
    pair<string,int>p("abc",1);
    mp.insert(p);
    //find or access
    cout<<mp["abc"]<<endl;
    cout<<mp.at("abc")<<endl;

    // cout<<mp.at(ghi)<<endl;
    cout<<mp["ghi"]<<endl;//gives zero output

    //check presence
    if(mp.count("abc")>0){
        cout<<"abc is present"<<endl;
    }
    //erase
    mp.erase("abc");
    if(mp.count("abc")>0){
        cout<<"abc present"<<endl;
    }
    return 0;
}

