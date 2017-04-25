//
// Created by kwiakami on 25.04.17.
//

#include "Pesel.h"

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
        long summ = (9*pesel_[0] + 7*pesel_[1] + 3*pesel_[2] + 1*pesel_[3] + 9*pesel_[4] + 7*pesel_[5] + 3*pesel_[6] + 1*pesel_[7] + 9*pesel_[8] + 7*pesel_[9]) % 10;
        if(pesel_[10] != summ){
            throw InvalidPeselChecksum(pesel_, summ);
        }
    }

    AcademiaDataValidationError::AcademiaDataValidationError(std::string t): std::runtime_error(t) {

    }

    InvalidPeselCharacter::InvalidPeselCharacter(std::string t): AcademiaDataValidationError( "Invalid PESEL(" + t + ") character set" ){

    }

    InvalidPeselLength::InvalidPeselLength(std::string t, int sum): AcademiaDataValidationError("Invalid PESEL(" + t + ") length:" + std::to_string(sum)) {

    }

    InvalidPeselChecksum::InvalidPeselChecksum(std::string t, int sum): AcademiaDataValidationError("Invalid PESEL(" + t + ") checksum: " + std::to_string(sum)) {

    }
}
