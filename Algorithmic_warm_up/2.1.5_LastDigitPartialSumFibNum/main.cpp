#include <iostream>
#include <vector>

using namespace std;

vector<unsigned __int128> FibList;
unsigned __int128 aux, sum = 0;

int main(){
    int n, m;
    cin>>n>>m;

    FibList.push_back(0);
    FibList.push_back(1);

    for (int i = 2; i <= m; i++) {
        aux = FibList.at(0) + FibList.at(1);
        FibList.at(0) = FibList.at(1);
        FibList.at(1) = aux;

        if(i>=n && i<=m) sum += aux;
    }
    
    putchar(sum % 10 + '0');
}