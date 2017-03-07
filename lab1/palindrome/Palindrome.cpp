//
// Created by soph on 07.03.17.
//

#include "Palindrome.h"
void menu()
{
    int m;
    string str;
    cout << "Sprawdz Palindrom [1]" << endl << "Wyjscie [2]" << endl << "Wybor: ";
    cin >> m;
    if (m==1)
    {
        cout << "Podaj slowo: ";
        cin >> str;
        if(is_palindrome(str)) cout << "To palindrom" << endl;
        else cout << "To nie palindrom" << endl;
        menu();

    }
}

bool is_palindrome(string str)
{
    for (int i=0;i<str.length()/2;i++)
    {
        if (str[i]!=str[str.length()-i-1])
            return false;
    }
    return true;
}