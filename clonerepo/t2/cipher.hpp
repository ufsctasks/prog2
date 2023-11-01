#ifndef CIPHER_HPP
#define CIPHER_HPP
#include "conversion.hpp"

class cipher
{
private:
    ConversionTable *tableArgument;
public:
    //string EncyptMessage();
    //string DecryptMessage();
    int method;
    //cipher(ConversionTable *tableArgument);
    cipher(int method);
    ~cipher();

    ConversionTable getTableArgument() { return *tableArgument; };
    void setTableArgument (int method){ tableArgument->RAmethod = method; };
};

#endif