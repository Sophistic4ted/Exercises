//
// Created by kwiakami on 21.03.17.
//

#include "Square.h"
#include <cmath>

namespace geometry{
    Square::Square():luc_(0), lbc_(0), ruc_(0), rbc_(0) {
        ;
    }
    Square::Square(const Point &left_upper_corner, const Point &left_bottom_corner, const Point &right_upper_corner,
                   const Point &right_bottom_corner) {
        if (Square::IsSquare(left_upper_corner, left_bottom_corner, right_upper_corner,right_bottom_corner)){
            luc_ = left_upper_corner;
            lbc_ = left_bottom_corner;
            ruc_ = right_upper_corner;
            rbc_ =right_bottom_corner;
        }

    }

    Square::~Square() {

    }

    double Square::Circumference() const {
        return 0;
    }

    double Square::Area() const {
        return 0;
    }

    bool Square::IsSquare(const Point &luc, const Point &lbc, const Point &ruc,
                          const Point &rbc  ){
        if (    luc.Distance(lbc) == luc.Distance(ruc)
                && ruc.Distance(luc)== rbc.Distance(ruc)) return true;
        else return false;
    }
}