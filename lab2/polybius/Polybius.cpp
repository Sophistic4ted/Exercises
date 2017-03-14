//
// Created by soph on 14.03.17.
//

#include "Polybius.h"

string alphabet="abcdefghiklmnopqrstuvwxyz";

string PolybiusCrypt(string message)
{
    if (message=="j") message ="i";
    for (int i = 0; i< alphabet.length();i++)
    {
        string tmp_str;
        tmp_str.push_back(alphabet[i]);
        if(message==tmp_str){
            return (to_string((i/5)+1)+to_string(i%5+1));
        }
    }
}
string PolybiusDecrypt(string crypted)
{
    int number = atoi(crypted.c_str());
    for (int i =0; i<alphabet.length();i++)
    {
       if (i== (5*((number/10)-1)+number%10-1))
       {
           string tmp_str;
           tmp_str.push_back(alphabet[i]);
           return tmp_str;
       }
    }
    return crypted;
}