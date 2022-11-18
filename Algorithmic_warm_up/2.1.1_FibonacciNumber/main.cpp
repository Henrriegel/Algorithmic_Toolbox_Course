#include<iostream>

using namespace std;

/*      Naive algorithm using recursion
int fibonacci(int n){
    if(n<=1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
*/

/*  With unsigned __int128 only prints until 186 */

unsigned __int128 fibonacci(int n){
    unsigned __int128 Flist[n];
    Flist[0] = 0;
    Flist[1] = 1;
    for (int i = 2; i <= n; i++) {
        Flist[i] = Flist[i - 1] + Flist[i - 2];
    }
    return Flist[n];
}

void print(unsigned __int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main(){
    int n;
    std::cin>>n;
    print(fibonacci(n));
}