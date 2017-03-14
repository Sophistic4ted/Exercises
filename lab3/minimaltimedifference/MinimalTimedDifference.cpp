//
// Created by kwiakami on 14.03.17.
//

#include <sstream>
#include <regex>
#include <cmath>
#include <iostream>

#include "MinimalTimedDifference.h"
using namespace std;
int ToInt(string value)
{
    int int_value;
    stringstream ss;
    ss << value;
    ss >> int_value;
    return int_value;
}

unsigned int ToMinutes(string time_HH_MM)
{
    regex  pattern {R"((\d{1,2}):(\d{2}))"};

    smatch matches;
    int value ;

    if (regex_match(time_HH_MM, matches, pattern))
    {
        value = ToInt(matches[1])*60 + ToInt(matches[2]);
    }
    return value;
}
unsigned int MinimalTimeDifference(vector<string> times)
{

}