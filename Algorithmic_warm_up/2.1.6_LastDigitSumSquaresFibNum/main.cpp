#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<unsigned __int128> FibList;
unsigned __int128 aux, sum = 1;

int main(){
    int n;
    cin>>n;

    FibList.push_back(0);
    FibList.push_back(1);

    for (int i = 2; i <= n; i++) {
        aux = FibList.at(0) + FibList.at(1);
        FibList.at(0) = FibList.at(1);
        FibList.at(1) = aux;

        sum += pow(aux, 2);
    }
    
    putchar(sum % 10 + '0');
}