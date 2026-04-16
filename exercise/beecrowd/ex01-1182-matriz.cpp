#include <bits/stdc++.h>

int main() {
    int matriz[12][12], num, result=0;
    char option;

    std::cin >> num;
    std::cin >> option;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            matriz[i][j] = std::rand();
        }
    }

    for(int k=0; k<12; k++) {
        result += matriz[k][num];
    }

    if(option == 'm') {
        std::cout << (result/12);
    }
    else if(option == 's') {
        std::cout << result;
    }
}