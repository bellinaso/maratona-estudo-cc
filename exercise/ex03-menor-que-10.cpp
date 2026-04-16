#include <stdlib.h>
#include <iostream>

#define len 10

void lessThenTen(int vector[], int i) {
    if(i == len) return;

    if(vector[i] <= 10) {
        std::cout << "vector["<< i <<"] = "<< vector[i] << "\n";
    }
    lessThenTen(vector, i+1);
}


int main() {
    int vector[len];

    for(int i=0; i<len; i++) {
        std::cout << "Insira o " << i << " num: ";
        std::cin >> vector[i];
    }

    lessThenTen(vector, 0);
}