#include <iostream>
#include <vector>    // biblioteca pentru vector
#include <algorithm> // bibloteca pentru sort, si alte functii (ex: reverse)

#define modulo 100

using namespace std;

struct SimpleStruct
{
    int a;
    int b;
    int c;

};

// custom comparator (one or more criterias )
bool cmp(const SimpleStruct &x, const SimpleStruct &y)
{
    if(x.a == y.a){
        return x.b < x.b;
    }
    return x.a < y.a;
    
}

// Methods to iterate a stl vector
void displayVectors(vector<int> v)
{
    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n";

    for (int i = 0; i < v.size(); ++i) {
        cout << i << " ";
    }
    cout << "\n";
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
}



int main()
{
    // initialize a vector
    vector<int> v{1,2,3,5,7,8,9};
    vector<int> vv;
    vector<int> vvv(10);
    vector<SimpleStruct> vStructs;
    

    // put elements in a stl vector
    for(int i = 0; i < v.size(); i++){
       vv.push_back(rand()%100);
    }
    
    for(int i = 0; i < 10; i++) {
       SimpleStruct simpleStruct;
       simpleStruct.a = rand()%modulo;
       simpleStruct.b = rand()%modulo;
       simpleStruct.c = rand()%modulo;
       vStructs.push_back(simpleStruct);
        
    }

    // lambda expression
    auto cmpp = [](SimpleStruct a, SimpleStruct b) { return a.a < b.a; }; 
    sort(v.begin(), v.end());

    // methods to sort a vecctor of structs
    sort(vStructs.begin(),vStructs.end(),cmp);
    sort(vStructs.begin(),vStructs.end(),cmpp);
    for(auto it : vStructs){
        cout << it.a <<" "<< it.b <<" "<< it.c<<"\n";
    }
}
