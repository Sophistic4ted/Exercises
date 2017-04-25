//
// Created by kwiakami on 11.04.17.
//

#ifndef JIMP_EXERCISES_UNIFORMFILL_H
#define JIMP_EXERCISES_UNIFORMFILL_H

#include "ArrayFillBase.h"

namespace arrays {

    class UniformFill : public ArrayFill {
    public:
        UniformFill(int value = 0) : value_{value} {}

        virtual int Value(int index) const override {
            return value_;
        }

    private:
        int value_;
    };
}



#endif //JIMP_EXERCISES_UNIFORMFILL_H
