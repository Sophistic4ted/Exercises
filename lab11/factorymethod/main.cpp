//
// Created by kwiakami on 23.05.17.
//

#include <iostream>
#include <vector>
#include "FactoryMethod.h"

int main(){
    std::vector<double> k(10, 1.5);
    k.emplace_back(12.777777);
    std::cout << Mean(k) << std::endl;
    double a = 0.5;
    int b = 2;
    std::cout << Add(a,b);
    return 0;
}