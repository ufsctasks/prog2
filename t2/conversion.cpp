#include "conversion.hpp"

ConversionTable::ConversionTable(int RA)
{
    cout << "constructor called" << endl;
    this->RAmethod = RA;
}

ConversionTable::~ConversionTable()
{
    cout << "destructor called" << endl;
}