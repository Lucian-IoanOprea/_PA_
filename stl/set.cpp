#include <iostream>
#include <set>

using namespace std;

int main(){

    // nu contine duplicate ; toate elementele vor fi unice 
    set<int> set;

    multiset<int> multiSet;

    set.insert(1);
    set.insert(1);
    set.insert(10);
    set.insert(12);

    multiSet.insert(1);
    multiSet.insert(1);
    multiSet.insert(10);
    multiSet.insert(12);
    

    for (auto it : set){
        cout << it<<" ";
    }
    cout <<"\n";

    for (auto it : multiSet){
        cout<< it <<" ";
    }
    cout <<"\n";


}