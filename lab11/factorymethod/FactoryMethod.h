//
// Created by kwiakami on 23.05.17.
//

#ifndef JIMP_EXERCISES_FACTORYMETHOD_H
#define JIMP_EXERCISES_FACTORYMETHOD_H

#include <string>
#include<vector>
namespace factoryMethod {

template<class T>
T Create() {
    return T();
}
    class MyType{
    public:
        std::string SayHello(){
                return "hello";
        }
    };
}

template<class T,class J>
auto Add( const T &a, const J &b) {
    return a + b;
}
template<class T>
auto Mean(const std::vector<T> &v) {
    T sum;
    for (auto i : v){
        sum += i;
    }
    return sum/v.size();,
}
#endif //JIMP_EXERCISES_FACTORYMETHOD_H
