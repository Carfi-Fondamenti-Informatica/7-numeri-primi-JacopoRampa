#include "lib.h"
bool numero_primo(int n, int d){
    if(d==0 || d==1) {
        return true;
    }
    else {
        int c=n%d;
        if(c!=0){
            numero_primo(n, d-1);
        }
        else{
            return false;
        }

    }
}
