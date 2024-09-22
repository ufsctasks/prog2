#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <vector>

using namespace std;

class ConversionTable
{
private:
public:
    int RAmethod;
    ConversionTable(int RAmethod);
    ~ConversionTable();
    string EncryptMessage(string defaultMessage, int method){
    
    string result;

    method = RAmethod;

    for(size_t i = 0; i<defaultMessage.length(); i++){
        char dchar = defaultMessage[i] + method;
        result +=dchar;
    }

    return result;
    };
    string DecryptMessage(string defaultMessage, int method){
    
    string result;

    method = RAmethod;

    for(size_t i = 0; i<defaultMessage.length(); i++){
        char dchar = defaultMessage[i] - method;
        result +=dchar;
    }

    return result;
    };
    
};
#endif