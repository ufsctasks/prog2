#include "cipher.hpp"

//cipher::cipher(ConversionTable *tableArgument)
//{
//    tableArgument = new ConversionTable (*tableArgument);
//}

cipher::cipher(int method)
{
    this->method = method;
}

cipher::~cipher()
{
    delete tableArgument;
}