//
// Created by kwiakami on 25.04.17.
//

#include "Pesel.h"
#include <iostream>
namespace academia{

    Pesel::Pesel(const std::string &pesel_) : pesel_(pesel_) {
        if(pesel_.length() != 11){
            throw InvalidPeselLength(pesel_, pesel_.length());
        }
        std::string z = "1234567890";
        for(auto i : pesel_){
            bool yf = false;
            for(auto j : z){
                if(i == j){
                    yf = true;
                    break;
                }
            }
            if(!yf){
                throw InvalidPeselCharacter(pesel_);
            }
        }
        long g = 0;
        long summ[10] = {9,7,3,1,9,7,3,1,9,7};
        for (int i = 0; i < 10; i++){


            g += summ[i] * (pesel_[i] - '0');

        }
        g %= 10;
        if(atoi(&pesel_[10]) != g){
            throw InvalidPeselChecksum(pesel_, g);
        }
    }

    AcademiaDataValidationError::AcademiaDataValidationError(std::string t): std::runtime_error(t) {

    }

    InvalidPeselCharacter::InvalidPeselCharacter(std::string t): AcademiaDataValidationError( "Invalid PESEL(" + t + ") character set" ){

    }

    InvalidPeselLength::InvalidPeselLength(std::string t, int sum): AcademiaDataValidationError("Invalid PESEL(" + t + ") length: " + std::to_string(sum)) {

    }

    InvalidPeselChecksum::InvalidPeselChecksum(std::string t, int sum): AcademiaDataValidationError("Invalid PESEL(" + t + ") checksum: " + std::to_string(sum)) {

    }
}
