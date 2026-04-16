#include <stdlib.h>
#include <iostream>

void somatorio(float *soma, int i) {
    if(i>100) {
        return;
    }
    
    *soma += (1/i);
    somatorio(soma, i+1);
}


int main() {
    float soma = 1;
    somatorio(&soma, 1);

    std::cout << soma;
}