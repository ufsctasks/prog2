#include"conversion.hpp"
#include"cipher.hpp"


vector<int> RA {1, 8, 2, 0, 3, 8, 6, 2};// código de aluno

int main()
{
    int x;
    int current_method = 0;
    string encrypted;
    string decrypted;
        
        while (x != 4)
        {
            cout << "Choose a following options: "<< endl;
            cout << "1 - Encrypt text "<< endl;
            cout << "2 - Decrypt text"<< endl;
            cout << "3 - Change encrypt method (4 aviable) "<< endl;
            cout << "4 - EXIT"<< endl;
            cin >> x;
        
            switch (x)
            {
            case (1):
                vector<pair<char, char>> index;
                index = CreateConvTable(current_method);
                encrypted = EncryptMessage(input, index, current_method);
            break;

            case(2):
                decrypted = DecryptMessage(encrypted, index, current_method);
            break;

            case(3):
                current_method = switchMethod(RA);
            break;

            }
        }
        



    return 0;
}