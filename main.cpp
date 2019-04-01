#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main() {
    int numcases;
    cin>>numcases;
    map<string, int> paises;
    for (int i=0;i<numcases;i++){

        string pais;
        string n1;string n2;
        cin>>pais>>n1>>n2;

        if (paises.find(pais) == paises.end()) {
            paises.insert(pair<string, int> (pais,1));
        } else if (paises.find(pais) != paises.end()){
            paises[pais]++;
        }

    }
    for (auto k:paises){
        cout<<k.first<<" "<<k.second<<endl;
    }
}

