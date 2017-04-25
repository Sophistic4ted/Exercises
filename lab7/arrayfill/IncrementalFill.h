//
// Created by kwiakami on 11.04.17.
//

#ifndef JIMP_EXERCISES_INCREMENTALFILL_H
#define JIMP_EXERCISES_INCREMENTALFILL_H

#include "ArrayFillBase.h"
namespace arrays {
    class IncrementalFill : public ArrayFill {

    public:
        IncrementalFill(int start, int step = 1):start(start){
            this->step = step;
        }
        virtual int Value(int index) const override{
            return start + (index * step);
        }

    private:
        int start;
        int step;
    };
}

#endif //JIMP_EXERCISES_INCREMENTALFILL_H
