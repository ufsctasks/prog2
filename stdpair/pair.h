#include<iostream>
#include<utility>
#include<vector>
#include<tuple>

using namespace std;

class message{
    private:

        vector<char> encriptTable 
        {9, 'w', 'z', 'Y', 8,
        'x', 'v', 't', 7, 's', 'r',
        'q', 'p', 4, 6, 'n', 'm', 'l', 'k', 'j',
        5, 'H', 'g', 'f', 'd', 'c'};

    public:
        vector<char> Table
        {'a', 'b', 'c', 'd', 'e', 'f', 
        'g', 'h', 'i', 'j', 'k', 'l', 'm', 
        'n', 'o', 'p', 'q', 'r', 's', 't', 
        'u', 'v', 'w', 'x', 'y', 'z'};
        
    vector<char> getEcript()
    {
        for(size_t i = 0; i < Table.size(); i++){
            return encriptTable.at(i);      
        }
    }
};