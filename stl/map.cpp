#include <map>
#include <string>
#include <iostream>
#include <unordered_map>

#define modulo 100

using namespace std;

int main(){
  // cele douat tipuri reprezinta o pereche (cheie,valoare) - se pot utiliza orice tipuri
  map<int,int> a;  // bazat pe arbori binari balansati (Red-Black Tree), deci operatiile de baza au O(logN) -> mereu ORDONAT
  unordered_map<int,int> b; // bazat pe hashTable ,O(1) amortizat pe cautare

  for(int i = 0; i < 15; i++ ){
    a[i] = i + 2;
    b[i] = i + 2;
   // a.insert(make_pair(rand()%10,rand()%10)); <- merge si asa
  }

  for(auto it : a){
      cout << it.first <<" "<<it.second<<"\n";
  }
  cout <<"--------------------"<<"\n";
  for(auto it : b){
      cout << it.first <<" "<<it.second<<"\n";
  }

  


}