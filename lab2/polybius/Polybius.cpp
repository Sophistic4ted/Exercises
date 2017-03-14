//
// Created by soph on 14.03.17.
//

#include "Polybius.h"

string PolybiusCrypt(string message)
{
    string alphabet="abcdefghiklmnopqrstuvwxyz";
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
    return crypted;
}