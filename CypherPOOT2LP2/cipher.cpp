    #include "conversion.hpp"
    #include "cipher.hpp"

    string EncryptMessage(string defaultMessage, vector<pair<char, char>> table, int method)
    {
        string result;
        for(size_t i = 0; i<defaultMessage.length(); i++)
            {
                char dchar = defaultMessage.at(i);
                char echar = table.at(dchar).second;
                result += echar;
            }
            return result;
            cout << "Message Encrypted"<< endl;

    };
    
    string DecryptMessage(string encryptedMessage, vector<pair<char, char>> table, int method)
    {
        string result;
        for(size_t i=0; i<input.length(); i++)
        {
            char chi = input.at(i); 

            for(size_t j=0; j<table.size(); j++)
            {
                if(chi == table.at(j).second)
                {
                    result += table.at(j).first;
                    break;
                }
            }
        }
        cout << "Message Decrypted"<< endl;
    return result;
    };