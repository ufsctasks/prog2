//basicamente a logica eh passar 2 termos do numero de matricula para
//a funcao encryptmessage sendo organizados em pares.
//Resumidaemnte não consegui fazer com que os parametros se comunicassem
//indo de cipher para conversiontable exatamente, porem deixei comentado
//a parte da logica que eu acredito que possa funcionar.

#include "conversion.hpp"
#include "cipher.hpp"


int main()
{
    int option = 0;
    int a0 = 0, a1 = 1;

    //vector<int> RA {1,8,2,0,3,8,6,2};

    vector<int> RA; // registro de aluno 18203862

    RA.push_back(1);
    RA.push_back(8);
    RA.push_back(2);
    RA.push_back(0);
    RA.push_back(3);
    RA.push_back(8);
    RA.push_back(6);
    RA.push_back(2);

    //inicializado dessa forma por conta de erros de compilacao

    int argument_int = (RA.at(a0) + RA.at(a1));
    cipher *argument;
    argument->setTableArgument(argument_int);

    string input;
    input = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";



    while (option != 4)
    {
        cout << "Chose a following options: " << endl;
        cout << "1 - Encrypt text " << endl;
        cout << "2 - Decript text" << endl;
        cout << "3 - Change encrypt method (4 aviable)" << endl;
        cout << "4 - Exit" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Encrypting message with " << a0 << " and " << a1 << endl;
            //argument.EncryptMessage(input, *argument);
            cout << input << endl;
            break;
        case 2:

            //argument.DecryptMessage(input, *argument);
            cout << "message decrypted" << endl;
            cout << input << endl;

            break;
        case 3:            
            cout << endl;
            cout << "codigo de aluno: ";
                for(size_t i = 0; i<RA.size(); i++)
                    cout << RA.at(i);
            cout << endl;
            cout << endl;

            cout << "chosse a pair to encrypt the text (pos 1) ; (pos 2): " << endl;
            cin >> a0;
            cin >> a1;

            argument_int = RA.at(a0) + RA.at(a1);
            argument->setTableArgument(argument_int);
            //ConversionTable(argument_int);

            break;
        case 4:
        delete argument;
            break;
        }
    }
    return 0;
}