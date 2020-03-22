//
// Created by Shou C on 3/17/20.
//

#include <string>
#include "iostream"

int base3(int a){
    if (a == 0){ return 0; }
    std::string result;
    while (a != 0){
        result.append(std::to_string(a % 3) + result);
        a = a / 3;
    }
    return std::stoi(result);
}

int count(int v){
    if (v == 0){
        return 0;
    }
    return (v % 10 == 2) + count(v / 10);
}