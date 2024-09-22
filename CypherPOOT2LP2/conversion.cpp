#include "conversion.hpp"


    int ind = 0;    
    int switchMethod(vector<int> RA)
    {
        int method;

        if (ind<=6)
        {
           method = ((RA.at(ind)) + (RA.at(ind+1)))/2;
           ind += 1;
        }
        else ind = 0;
        cout << "Method has been swicthed"<< endl;

        
        return method;
    };

    vector<pair<char, char>> CreateConvTable(int method)
    {
        vector<pair<char, char>> table;
        for(size_t i = 0; i<256; i++)
        {
            pair<char, char> p;
            p.first = i;
            p.second = p.first + method;
            table.push_back(p); 
        }
        return table;
    }

    
