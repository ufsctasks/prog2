#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include<iostream>
#include<vector>
#include<string>
#include<utility>

using namespace std;
    
string input = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

class ConversionTable{
        //atributos
    public:
    
        //metodos
    int switchMethod(vector<int> RA);
    vector<pair<char, char>> CreateConvTable(int method);
    ConversionTable(){cout << "ConversionTable Contructed"<< endl;};
    ~ConversionTable(){cout << "ConversionTable Destroyed"<< endl;};
};

#endif