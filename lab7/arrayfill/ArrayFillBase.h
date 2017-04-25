//
// Created by kwiakami on 11.04.17.
//

#ifndef JIMP_EXERCISES_ARRAYFILLBASE_H
#define JIMP_EXERCISES_ARRAYFILLBASE_H


#include <iostream>
#include <stdlib.h>
#include <vector>

namespace arrays {
    class ArrayFill {
    public:
        virtual int Value(int index) const =0;

    };
    void FillArray(size_t size, const ArrayFill &filler, std::vector<int> *v) {
        v->clear();
        v->reserve(size);
        for (size_t i = 0; i < size; i++) {
            v->emplace_back(filler.Value(i));
        }
    }
}


#endif //JIMP_EXERCISES_ARRAYFILLBASE_H
