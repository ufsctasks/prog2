#ifndef CIPHER_HPP
#define CIPHER_HPP

#include "conversion.hpp"

class  Cipher
{
    private:
    ConversionTable *tableArgument;
    string EncryptMessage(string defaultMessage, vector<pair<char, char>> table, int method);
    string DecryptMessage(string encryptedMessage, vector<pair<char, char>> table, int method);
    public:
    Cipher(){cout << "Cipher Constructed"<< endl;};
    ~Cipher(){cout << "Cipher Destroyed"<< endl;};
};

#endif