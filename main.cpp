#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    if (numero_primo(n,n-1)){
        cout << "numero primo";
    }
    else {
        cout << "numero non primo";
    }
    return 0;
}
