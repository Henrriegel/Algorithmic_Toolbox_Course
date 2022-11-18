#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long int> FibList;
unsigned long int aux;

int main(){
    int n;
    cin>>n;

    FibList.push_back(0);
    FibList.push_back(1);

    /*Pisano period -> https://mathworld.wolfram.com/PisanoPeriod.html*/
    n %= 60;

    for (int i = 2; i <= n; i++) {
        aux = FibList.at(0) + FibList.at(1);
        FibList.at(0) = FibList.at(1);
        FibList.at(1) = aux;
    }
    
    cout<<aux % 10<<endl;
}