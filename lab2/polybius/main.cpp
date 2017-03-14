//
// Created by soph on 14.03.17.
//
#include "Polybius.h"

int main(int argc, char *argv[])
{
    ifstream source(argv[1]);
    fstream destination(argv[2],ios::app|ios::out);
    bool encrypting = atoi(argv[3]);
    char letter;
    char number[1];
    if (!source)
        cout << "Nie mozna otworzyc pliku!" <<endl;
    if (encrypting)
    {
        while (source >> letter)
        {
            string tmp_str;
            tmp_str.push_back(letter);
            tmp_str = PolybiusCrypt(tmp_str);
            destination << tmp_str << " ";
        }
    }
    else
    {
        while (source >> number)
        {
            string tmp_str(number);
            tmp_str = PolybiusDecrypt(tmp_str);
            destination << tmp_str;
        }
    }
    source.close();
    destination.close();

}