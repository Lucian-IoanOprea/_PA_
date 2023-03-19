#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct SimpleStruct
{
    int a;
    int b;
    int c;
};

struct compare
{
    bool operator()(const SimpleStruct &x, const SimpleStruct &y)
    {
        if (x.a == y.a)
        {
            return x.b< x.b;
        }
        return x.a > y.a;
    }
};
int main()
{

    
    priority_queue<SimpleStruct, vector<SimpleStruct>, compare> pq;
    for(int i = 0 ;i < 10; i++){
        SimpleStruct a;
        a.a = rand()%100;
        a.b = rand()%100;
        a.c = rand()%100;
        pq.push(a);
    }

    // parcurgere coada de prioritati (identic cu o coada normala)
    while(!pq.empty()){
        SimpleStruct top = pq.top(); // accesare element din fata 
        cout << top.a<<" "<<top.b <<" "<<top.c<<"\n";
        pq.pop();

    }
}