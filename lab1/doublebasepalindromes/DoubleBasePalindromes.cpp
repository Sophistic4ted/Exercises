//
// Created by soph on 07.03.17.
//

#include "DoubleBasePalindromes.h"
bool is_palindrome(string str)
{
    for (int i=0;i<str.length()/2;i++)
    {
        if (str[i]!=str[str.length()-i-1])
            return false;
    }
    return true;
}

uint64_t DoubleBasePalindromes(int max_vaule_exculsive)
{
    uint64_t sum = 0;
    if (max_vaule_exculsive < 0) return 0;
    for (uint64_t i=0;i<max_vaule_exculsive;i++)
        {
            if (is_palindrome(to_string(i)))
            {
                string binary="";
                uint64_t j= i;
                while (j>0){
                    binary = to_string(j%2) + binary;
                    j/=2;
                }
                if (is_palindrome(binary)) sum+=i;
            }
        }
    return sum;
}
