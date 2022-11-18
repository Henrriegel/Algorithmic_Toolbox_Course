#include<iostream>
#include<vector>

using namespace std;

void print(unsigned __int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main(){
    int n, m;

    vector<unsigned __int128> fibList;
    unsigned __int128 aux;

    cin>>n>>m;

    fibList.push_back(0);
    fibList.push_back(1);

    for(int i = 2; i <= n; i ++){
        aux = fibList[0] + fibList[1];
        fibList[0] = fibList[1];
        fibList[1] = aux;
    }

    aux = fibList[1] % m;

    print(aux);

}