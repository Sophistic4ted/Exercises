//
// Created by kwiakami on 21.03.17.
//

#ifndef JIMP_EXERCISES_SQUARE_H
#define JIMP_EXERCISES_SQUARE_H

#include "Point.h"

namespace geometry{
    class Square {
    public:
        Square( const Point &left_upper_corner,
                const Point &left_bottom_corner,
                const Point &right_upper_corner,
                const Point &right_bottom_corner);

        ~Square();
        bool IsSquare(const Point &luc, const Point &lbc, const Point &ruc,
                      const Point &rbc );
        double Circumference() const;
        double Area() const;
    private:
        Point luc_, lbc_, ruc_, rbc_;

    };

}



#endif //JIMP_EXERCISES_SQUARE_H
