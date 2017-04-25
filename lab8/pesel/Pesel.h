//
// Created by kwiakami on 25.04.17.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <stdexcept>
#include <string>
namespace academia {
    class AcademiaDataValidationError: public std::runtime_error{
    public:
        AcademiaDataValidationError(std::string t);
    };
    class InvalidPeselCharacter : public AcademiaDataValidationError{
    public:
        InvalidPeselCharacter(std::string t);
    };
    class InvalidPeselChecksum : public AcademiaDataValidationError{
    public:
        InvalidPeselChecksum(std::string t, int sum);
    };
    class InvalidPeselLength : public AcademiaDataValidationError{
    public:
        InvalidPeselLength(std::string t, int sum);
    };
    class Pesel {
    public:
        Pesel(const std::string &pesel_);


    private:
        std::string pesel_;
    };
}

#endif //JIMP_EXERCISES_PESEL_H
